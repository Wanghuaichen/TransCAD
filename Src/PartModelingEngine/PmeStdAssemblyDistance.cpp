#include "stdAfx.h"
#include ".\PmeAssembly.h"
#include ".\PmePart.h"
#include ".\PmeExplicitModel.h"
#include ".\PmeSolid.h"
#include ".\PmeArgumentException.h"
#include ".\PmeSelectionManager.h"
#include ".\PmeSketchUtility.h"

#include ".\PmeExceptionTest.h"
#include ".\PmeIlligalOperationException.h"
#include ".\PmeDatumPlane.h"
#include ".\PmeDatumPlaneUtility.h"
#include ".\PmeQuery.h"
#include ".\PmeArgumentTypeException.h"
#include "MrTransformation.h"
#include "MrMath.h"

#include ".\PmeStdAssemblyDistance.h"

PME_IMPLEMENT_RUNTIME_TYPE(PmeStdAssemblyDistance, PmeObject)

PmeStdAssemblyDistance::PmeStdAssemblyDistance(PmeAssembly * pAssembly,
											   PmePart * pConstrainedPart,
											   PmeReference * pConstrainedGeometry,
											   PmePart * pReferencePart,
											   PmeReference * pReferenceGeometry,
											   double distance,
											   PmeStdAssemblyIncidenceType incidenceType)
: PmeStdAssemblyConstraint(pAssembly)
{
	m_pCoPart		= pConstrainedPart;
	m_pRefPart		= pReferencePart;
	m_pCoGeometry	= pConstrainedGeometry;
	m_pRefGeometry	= pReferenceGeometry;
	m_Distance		= distance;
	m_DistanceType	= incidenceType;
}

PmeStdAssemblyDistance::~PmeStdAssemblyDistance(void)
{
}

/**
	@brief PmeStdAssemblyDistance���� ����ϴ� ��� ����
	co�� constrained, ref�� reference�� �ǹ�
	L�� local, G�� global�� �ǹ�
*/
void PmeStdAssemblyDistance::UpdateConstraint()
{
	m_pCoEntity = GetConstrainedPart()->GetSelectionManager()->GetBrepFromReference(m_pCoGeometry);
	m_pRefEntity = GetReferencePart()->GetSelectionManager()->GetBrepFromReference(m_pRefGeometry);
	
	MrAxis2	globalCSYS = globalCSYS.OXY();

	// Constraint�� ���Ǵ� part�� coordinate������ ����
	m_coPartCSYS = GetConstrainedPart()->GetPlacement();
	m_refPartCSYS = GetReferencePart()->GetPlacement();

	// ���� ��ǥ�踦 �۷ι� ��ǥ��� ��ȯ�ϱ� ���� Transformation ����
	// L means Local, G means Global
	MrTransformation coL2G = MrTransformation::CreateCoordinateSystemTransformation(m_coPartCSYS, globalCSYS);
	MrTransformation refL2G = MrTransformation::CreateCoordinateSystemTransformation(m_refPartCSYS, globalCSYS);

	const char * facetype = "face";
	const char * edgetype = "edge";
	const char * vertextype = "vertex";

	// 1. Constrained�� reference geometry�� ��� "Face" type �� ��,
	if ( *m_pCoEntity->type_name() == *facetype && *m_pRefEntity->type_name() == *facetype )
	{
		// �б��� 1.1 �ΰ��� ���� ��� ����� ��,
		if ( IsPlanarFace((FACE *)m_pCoEntity) && IsPlanarFace((FACE *)m_pRefEntity) )
		{
			// ����� ���� ��ǥ�� ����
			m_coFaceLCSYS = PmeQueryFaceLocalCoordinate((FACE *)m_pCoEntity);
			m_refFaceLCSYS = PmeQueryFaceLocalCoordinate((FACE *)m_pRefEntity);

			// ���� ��ǥ�踦 �۷ι� ��ǥ��� ��ȯ
			m_coFaceGCSYS = MrMath::Transform(m_coFaceLCSYS, coL2G);
			m_refFaceGCSYS = MrMath::Transform(m_refFaceLCSYS, refL2G);

			// constrained�� reference ����� normal vector
			m_coNormal.SetCoordinates(m_coFaceLCSYS.ZDirection().X(), m_coFaceLCSYS.ZDirection().Y(), m_coFaceLCSYS.ZDirection().Z());
			m_refNormal.SetCoordinates(m_refFaceLCSYS.ZDirection().X(), m_refFaceLCSYS.ZDirection().Y(), m_refFaceLCSYS.ZDirection().Z());

			// �̹� normal vector�� ������ ���
			// ����� �߽����� �������� constrained part�� �̵���Ų��.
			if ( MrMath::IsParallel( m_coNormal, m_refNormal ) )
			{
				// �б��� 1.1.1 Distance constraint�� ���� �ɼ��� "opposite" �� ��,
				if ( m_DistanceType == PmeStdAssemblyIncidenceType_Opposite )
				{
					DoDistancePlanarFacesOpposite();
				}

				// �б��� 1.1.2 Distance constraint�� ���� �ɼ��� "same" �� ��,
				else if ( m_DistanceType == PmeStdAssemblyIncidenceType_Same )
				{
					DoDistancePlanarFacesSame();
				}
			}

			// Before setting a distance, rotate constrained part parallel to reference part
			else
			{

				if ( m_DistanceType == PmeStdAssemblyIncidenceType_Opposite )
				{
					DoDistancePlanarFacesOpposite();
				}

				else if ( m_DistanceType == PmeStdAssemblyIncidenceType_Same )
				{
					DoDistancePlanarFacesSame();
				}
			}
		}

		// 1.2 Both faces are cylinderical face


		// 1.3 Constrained face is planar face and reference face is cylinderical


		// 1.4 Constrained face is cylinderical face and reference face is planar
	}


	// 2. Constrained and reference geometry are "Edge" type
	if ( *m_pCoEntity->type_name() == *edgetype && *m_pRefEntity->type_name() == *edgetype )
	{
		
	}


	// 3. Constrained geometry is "Face" and reference geometry is "Edge"
	if ( *m_pCoEntity->type_name() == *facetype && *m_pRefEntity->type_name() == *edgetype )
	{

	}


	// 4. Constrained geometry is "Edge" and reference geometry is "Face"
	if ( *m_pCoEntity->type_name() == *edgetype && *m_pRefEntity->type_name() == *facetype )
	{

	}

	
	// Update coordinates of constrained part
	GetConstrainedPart()->SetPlacement(m_translationResult);

	// Save final coordinates
	SetTransformedCSYS(m_translationResult);
	
}

/**
	@brief 
	Conduct distance constrainet that both geometires are planar face
	and incidence option is opposite
*/
void PmeStdAssemblyDistance::DoDistancePlanarFacesOpposite(void)
{
	MrAxis2	globalCSYS = globalCSYS.OXY();

	// Constraint�� �ο��ϱ� ���� ���õ� geometry�� ��ġ������ Ȯ��
	// constrained geometry�� reference geometry���� �ٱ��ʿ� �ְų�
	// ������ ����� �����ϰ� ���� �� ����
	if ( IsOutside( m_coFaceGCSYS, m_refFaceGCSYS ) )
	{
		// �̹� normal vector�� �ݴ� ������ ��,
		if ( MrMath::IsOpposite( m_coNormal, m_refNormal ) )
		{
			// Constrained part�� reference part�������� �̵�
			MrVector vecCo2Ref;
			vecCo2Ref.SetCoordinates(m_refFaceGCSYS.Location().X() - m_coFaceGCSYS.Location().X(),
									 m_refFaceGCSYS.Location().Y() - m_coFaceGCSYS.Location().Y(),
									 m_refFaceGCSYS.Location().Z() - m_coFaceGCSYS.Location().Z());

			double initialDist = abs( MrMath::Dot( vecCo2Ref, m_refNormal ) );

			// ���� �Է� �Ÿ� ���� ó�� ��ġ�� �Ÿ����� Ŭ ����
			// constrained part�� �ݴ�������� �̵��ؾ��ϱ� ������
			// "reference geometry�� normal ����"���� �̵��ϰ�
			// �̵��Ÿ��� �Է� �Ÿ� - �ʱ� �Ÿ��� ����
			if ( m_Distance > initialDist )
			{
				double translationDist = m_Distance - initialDist;

				m_translationVector = Translation( m_refNormal, translationDist );
								
				m_translationResult = SetTranslationResult( m_coPartCSYS, m_translationVector );
			}

			// �Է� �Ÿ��� ó�� ���� �Ÿ����� ���� ����
			// "constrained geometry�� normal ����"���� �̵�
			// �̵��Ÿ��� �ʱ� �Ÿ� - �Է� �Ÿ�
			else if ( m_Distance < initialDist )
			{
				double translationDist = initialDist - m_Distance;

				m_translationVector = MrMath::Reverse( Translation(m_refNormal, translationDist) );

				m_translationResult = SetTranslationResult( m_coPartCSYS, m_translationVector );
			}						
		}

		// ���õ� geometry�� normal vector�� ���� �����̸�,
		// constrained geometry�� normal vector�� 
		// reference geometry�� normal vector�� ��ġ��Ų��.
		else if ( MrMath::IsEqual( m_coNormal, m_refNormal ) )
		{
			MrMatrix rMatrix = GetRotationMatrix( m_coNormal, m_refNormal, M_PI );
			MrAxis2 rotatedAxis = RotateCoordinate( rMatrix, m_coPartCSYS );

			GetConstrainedPart()->SetPlacement( rotatedAxis );


			// ȸ�� ���� constrained part�� ��ǥ������ �ٽ� �ҷ��´�.
			MrAxis2 coPartCSYSre = GetConstrainedPart()->GetPlacement();
			MrTransformation coL2Gre = MrTransformation::CreateCoordinateSystemTransformation( coPartCSYSre, globalCSYS );

			// constrained geometry�� ���ð� �۷ι� ��ǥ������ ������Ʈ
			MrAxis2 coFaceLCSYSre = PmeQueryFaceLocalCoordinate( (FACE *)m_pCoEntity );
			MrAxis2 coFaceGCSYSre = MrMath::Transform( m_coFaceLCSYS, coL2Gre );


			// ȸ�� �Ŀ� constrained part�� reference part�� ��ġ�� �ٽ� Ȯ��
			if ( !IsOutside( coFaceGCSYSre, m_refFaceGCSYS ) )
			{
				MrVector vecCo2Ref;
				vecCo2Ref.SetCoordinates( m_refFaceGCSYS.Location().X() - coFaceGCSYSre.Location().X(),
										  m_refFaceGCSYS.Location().Y() - coFaceGCSYSre.Location().Y(),
										  m_refFaceGCSYS.Location().Z() - coFaceGCSYSre.Location().Z());

				double initialDist = abs( MrMath::Dot( vecCo2Ref, m_refNormal ) );
							
				double translationDist = initialDist + m_Distance;

				m_translationVector = Translation( m_refNormal, translationDist );
								
				m_translationResult = SetTranslationResult( coPartCSYSre, m_translationVector );
			}

			else if ( IsOutside( coFaceGCSYSre, m_refFaceGCSYS ) )
			{
				MrVector vecCo2Ref;
				vecCo2Ref.SetCoordinates( m_refFaceGCSYS.Location().X() - coFaceGCSYSre.Location().X(),
										  m_refFaceGCSYS.Location().Y() - coFaceGCSYSre.Location().Y(),
										  m_refFaceGCSYS.Location().Z() - coFaceGCSYSre.Location().Z());

				double initialDist = abs( MrMath::Dot( vecCo2Ref, m_refNormal ));

				if ( initialDist > m_Distance )
				{
					double translationDist = initialDist - m_Distance;

					m_translationVector = MrMath::Reverse ( Translation( m_refNormal, translationDist ) );
								
					m_translationResult = SetTranslationResult( coPartCSYSre, m_translationVector );
				}

				else if ( initialDist < m_Distance )
				{
					double translationDist = m_Distance - initialDist;

					m_translationVector = Translation( m_refNormal, translationDist );
								
					m_translationResult = SetTranslationResult( coPartCSYSre, m_translationVector );
				}
			}
		}
	}

	// constrained geometry�� reference geometry���� ���ʿ� ��ġ�ϴ� ���
	// ������ �� ����� ��Ȳ
	else if ( !IsOutside( m_coFaceGCSYS, m_refFaceGCSYS ) )
	{
		// �̹� �ΰ��� normal vector�� �ݴ������ ��,
		if ( MrMath::IsOpposite( m_coNormal, m_refNormal ) )
		{
			MrVector vecCo2Ref;
			vecCo2Ref.SetCoordinates( m_refFaceGCSYS.Location().X() - m_coFaceGCSYS.Location().X(),
									  m_refFaceGCSYS.Location().Y() - m_coFaceGCSYS.Location().Y(),
									  m_refFaceGCSYS.Location().Z() - m_coFaceGCSYS.Location().Z());

			double initialDistance = abs(MrMath::Dot(vecCo2Ref, m_refNormal));
							
			// Add input distance value to initial distance 
			double translationDist = initialDistance + m_Distance;

			m_translationVector = Translation( m_refNormal, translationDist );

			m_translationResult = SetTranslationResult( m_coPartCSYS, m_translationVector );
		}


		// �ΰ��� normal vector�� ���� ������ ���ϰ� ���� ��,
		// 180�� ȸ���ϰ� distance constraint ����
		else
		{
			MrMatrix rMatrix = PmeStdAssemblyConstraint::GetRotationMatrix( m_coNormal, m_refNormal, M_PI );

			MrAxis2 rotatedAxis = RotateCoordinate( rMatrix, m_coPartCSYS );

			GetConstrainedPart()->SetPlacement( rotatedAxis );
							
			MrAxis2 coPartCSYSre = GetConstrainedPart()->GetPlacement();
			MrTransformation coL2Gre = MrTransformation::CreateCoordinateSystemTransformation( coPartCSYSre, globalCSYS );
							
			MrAxis2 coFaceLCSYSre = PmeQueryFaceLocalCoordinate( (FACE *)m_pCoEntity );
			MrAxis2 coFaceGCSYSre = MrMath::Transform( m_coFaceLCSYS, coL2Gre );


			if ( IsOutside( coFaceGCSYSre, m_refFaceGCSYS ) )
			{
				MrVector vecCo2Ref;
				vecCo2Ref.SetCoordinates( m_refFaceGCSYS.Location().X() - coFaceGCSYSre.Location().X(),
										  m_refFaceGCSYS.Location().Y() - coFaceGCSYSre.Location().Y(),
										  m_refFaceGCSYS.Location().Z() - coFaceGCSYSre.Location().Z());

				double initialDist = abs( MrMath::Dot( vecCo2Ref, m_refNormal ) );

								 
				if ( m_Distance > initialDist )
				{
					double translationDist = m_Distance - initialDist;

					m_translationVector = Translation( m_refNormal, translationDist );

					m_translationResult = SetTranslationResult( coPartCSYSre, m_translationVector );
				}
							
				else if ( m_Distance < initialDist )
				{
					double translationDist = initialDist - m_Distance;

					m_translationVector = MrMath::Reverse( Translation( m_refNormal, translationDist ) );

					m_translationResult = SetTranslationResult( coPartCSYSre, m_translationVector );
				}
			}

			else if ( !IsOutside( coFaceGCSYSre, m_refFaceGCSYS ) )
			{
				MrVector vecCo2Ref;
				vecCo2Ref.SetCoordinates( m_refFaceGCSYS.Location().X() - coFaceGCSYSre.Location().X(),
										  m_refFaceGCSYS.Location().Y() - coFaceGCSYSre.Location().Y(),
										  m_refFaceGCSYS.Location().Z() - coFaceGCSYSre.Location().Z());

				double initialDistance = abs( MrMath::Dot( vecCo2Ref, m_refNormal ) );
							
				double translationDist = initialDistance + m_Distance;

				m_translationVector = Translation( m_refNormal, translationDist );

				m_translationResult = SetTranslationResult( coPartCSYSre, m_translationVector );
			}							
		}
	}
}

/**
	@brief 
	Conduct distance constrainet that both geometires are planar face
	and incidence option is same
*/
void PmeStdAssemblyDistance::DoDistancePlanarFacesSame(void)
{
	MrAxis2	globalCSYS = globalCSYS.OXY();

	// ���õ� geometry�� ��ġ���� Ȯ��
	// constrained geometry�� reference geometry���� �ٱ��ʿ� ���� ��,
	if ( IsOutside( m_coFaceGCSYS, m_refFaceGCSYS ) )
	{
		// �̹� geometry�� normal vector�� ���� ������ ���� ��,
		if ( MrMath::IsEqual( m_coNormal, m_refNormal ) )
		{
			MrVector vecCo2Ref;
			vecCo2Ref.SetCoordinates( m_refFaceGCSYS.Location().X() - m_coFaceGCSYS.Location().X(),
									  m_refFaceGCSYS.Location().Y() - m_coFaceGCSYS.Location().Y(),
									  m_refFaceGCSYS.Location().Z() - m_coFaceGCSYS.Location().Z());
							
			double initialDist = abs( MrMath::Dot( vecCo2Ref, m_refNormal ) );

			double translationDist = initialDist + m_Distance;

			m_translationVector = MrMath::Reverse( Translation( m_refNormal, translationDist ) );
							
			m_translationResult = SetTranslationResult( m_coPartCSYS, m_translationVector );
		}

		// geometry�� normal vector�� �ݴ� ������ ���� ��,
		else if ( MrMath::IsOpposite( m_coNormal, m_refNormal ) )
		{
			MrMatrix rMatrix = PmeStdAssemblyConstraint::GetRotationMatrix( m_coNormal, m_refNormal, M_PI );

			MrAxis2 rotatedAxis = RotateCoordinate( rMatrix, m_coPartCSYS );

			GetConstrainedPart()->SetPlacement( rotatedAxis );

			MrAxis2 coPartCSYSre = GetConstrainedPart()->GetPlacement();
			MrTransformation coL2Gre = MrTransformation::CreateCoordinateSystemTransformation( coPartCSYSre, globalCSYS );

			MrAxis2 coFaceLCSYSre = PmeQueryFaceLocalCoordinate( (FACE *)m_pCoEntity );
			MrAxis2 coFaceGCSYSre = MrMath::Transform( m_coFaceLCSYS, coL2Gre );

			// �ѹ� �� ���� ���� ��ġ Ȯ��
			if ( IsOutside( coFaceGCSYSre, m_refFaceGCSYS ) )
			{
				MrVector vecCo2Ref;
				vecCo2Ref.SetCoordinates( m_refFaceGCSYS.Location().X() - coFaceGCSYSre.Location().X(),
										  m_refFaceGCSYS.Location().Y() - coFaceGCSYSre.Location().Y(),
										  m_refFaceGCSYS.Location().Z() - coFaceGCSYSre.Location().Z());

				double initialDist = abs( MrMath::Dot( vecCo2Ref, m_coNormal ) );

				double translationDist = initialDist + m_Distance;

				m_translationVector = MrMath::Reverse( Translation( m_refNormal, translationDist ) );
								
				m_translationResult = SetTranslationResult( coPartCSYSre, m_translationVector );
			}

			else if ( !IsOutside( coFaceGCSYSre, m_refFaceGCSYS ) )
			{
				MrVector vecCo2Ref;
				vecCo2Ref.SetCoordinates( m_refFaceGCSYS.Location().X() - coFaceGCSYSre.Location().X(),
										  m_refFaceGCSYS.Location().Y() - coFaceGCSYSre.Location().Y(),
										  m_refFaceGCSYS.Location().Z() - coFaceGCSYSre.Location().Z());

				double initialDist = abs( MrMath::Dot( vecCo2Ref, m_refNormal ) );

				if ( initialDist > m_Distance )
				{
					double translationDist = initialDist - m_Distance;

					m_translationVector = Translation( m_refNormal, translationDist );

					m_translationResult = SetTranslationResult( coPartCSYSre, m_translationVector );
				}

				else if ( initialDist < m_Distance )
				{
					double translationDist = m_Distance - initialDist;

					m_translationVector = MrMath::Reverse( Translation( m_refNormal, translationDist ) );

					m_translationResult = SetTranslationResult( coPartCSYSre, m_translationVector );
				}
			}
		}
	}

	// constrained geometry�� reference geometry���� ���ʿ� ���� ��,
	else if ( !IsOutside( m_coFaceGCSYS, m_refFaceGCSYS ) )
	{
		if ( MrMath::IsEqual( m_coNormal, m_refNormal ) )
		{
			MrVector vecCo2Ref;
			vecCo2Ref.SetCoordinates( m_refFaceGCSYS.Location().X() - m_coFaceGCSYS.Location().X(),
									  m_refFaceGCSYS.Location().Y() - m_coFaceGCSYS.Location().Y(),
									  m_refFaceGCSYS.Location().Z() - m_coFaceGCSYS.Location().Z());

			double initialDist = abs( MrMath::Dot( vecCo2Ref, m_refNormal ) );

			if ( initialDist > m_Distance )
			{
				double translationDist = initialDist - m_Distance;

				m_translationVector = Translation( m_refNormal, translationDist );

				m_translationResult = SetTranslationResult( m_coPartCSYS, m_translationVector );
			}

			else if ( initialDist < m_Distance )
			{
				double translationDist = m_Distance - initialDist;

				m_translationVector = MrMath::Reverse( Translation( m_refNormal, translationDist ) );

				m_translationResult = SetTranslationResult( m_coPartCSYS, m_translationVector );
			}
		}

		else if ( !MrMath::IsEqual( m_coNormal, m_refNormal ) )
		{
			MrMatrix rMatrix = PmeStdAssemblyConstraint::GetRotationMatrix( m_coNormal, m_refNormal, M_PI );

			MrAxis2 rotatedAxis = RotateCoordinate( rMatrix, m_coPartCSYS );

			GetConstrainedPart()->SetPlacement( rotatedAxis );

			MrAxis2 coPartCSYSre = GetConstrainedPart()->GetPlacement();
			MrTransformation coL2Gre = MrTransformation::CreateCoordinateSystemTransformation( coPartCSYSre, globalCSYS );

			MrAxis2 coFaceLCSYSre = PmeQueryFaceLocalCoordinate((FACE *)m_pCoEntity);
			MrAxis2 coFaceGCSYSre = MrMath::Transform( m_coFaceLCSYS, coL2Gre );


			if ( IsOutside( coFaceGCSYSre, m_refFaceGCSYS ) )
			{
				MrVector vecCo2Ref;
				vecCo2Ref.SetCoordinates( m_refFaceGCSYS.Location().X() - coFaceGCSYSre.Location().X(),
										  m_refFaceGCSYS.Location().Y() - coFaceGCSYSre.Location().Y(),
										  m_refFaceGCSYS.Location().Z() - coFaceGCSYSre.Location().Z());

				double initialDist = abs( MrMath::Dot( vecCo2Ref, m_refNormal ) );

				double translationDist = initialDist + m_Distance;

				m_translationVector = MrMath::Reverse(Translation( m_refNormal, translationDist ) );

				m_translationResult = SetTranslationResult( coPartCSYSre, m_translationVector );
			}

			else if ( !IsOutside( coFaceGCSYSre, m_refFaceGCSYS ) )
			{
				MrVector vecCo2Ref;
				vecCo2Ref.SetCoordinates( m_refFaceGCSYS.Location().X() - coFaceGCSYSre.Location().X(),
										  m_refFaceGCSYS.Location().Y() - coFaceGCSYSre.Location().Y(),
										  m_refFaceGCSYS.Location().Z() - coFaceGCSYSre.Location().Z());

				double initialDist = abs( MrMath::Dot( vecCo2Ref, m_refNormal ) );

				if ( initialDist > m_Distance )
				{
					double translationDist = initialDist - m_Distance;

					m_translationVector = Translation( m_refNormal, translationDist );

					m_translationResult = SetTranslationResult( coPartCSYSre, m_translationVector );
				}

				else if ( initialDist < m_Distance )
				{
					double translationDist = m_Distance - initialDist;

					m_translationVector = MrMath::Reverse( Translation( m_refNormal, translationDist ) );

					m_translationResult = SetTranslationResult( coPartCSYSre, m_translationVector );
				}
			}
		}
	}
}