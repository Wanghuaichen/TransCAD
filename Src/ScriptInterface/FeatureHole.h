#pragma once
#include "TransCADScript.h"
#include "Feature.h"


class FeatureHole : public Feature
{
public:
	FeatureHole(Part * pPart, int featureType);		// �⺻ ������
	FeatureHole(FeatureHole & pFeature)				// ���� ������
		:Feature(pFeature.GetPart(), pFeature.GetType())
	{
		CopyBasicInformation(pFeature);
		_depth1 = pFeature._depth1;
		_radius1 = pFeature._radius1;
			
		if (GetType() != 15)
		{
			_radius2 = pFeature._radius2;

			if (GetType() == 13)
				_depth2 = pFeature._depth2;
			else if (GetType() ==14)
				_angle1 = pFeature._angle1;

			_bottomAngle = pFeature._bottomAngle;
		}

		_center = pFeature._center;
	}

	virtual ~FeatureHole(void);

	void GetInfo(char * command);
	void AddInfo(TransCAD::IFeaturePtr spFeature);
	
	void Create(void);
	void Modify(char * command);

	void AskInfo(void);
	void Help(void);

private:
	Point3D _center;
	double _depth1, _radius1;		// ��� Hole�� �ʿ�	
	double _radius2, _bottomAngle;	// Counterbored, Countersunk ��
	double _depth2;					// Counterbored �� EndDepth
	double _angle1;					// Countersunk �� SinkAngle
};