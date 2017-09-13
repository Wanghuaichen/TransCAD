#pragma once
#include "TransCADScript.h"
#include "Feature.h"


class FeatureDraft : public Feature
{
public:
	FeatureDraft(Part * pPart, int featureType);	// �⺻ ������
	FeatureDraft(FeatureDraft & pFeature)			// ���� ������
		:Feature(pFeature.GetPart(), pFeature.GetType())
	{
		CopyBasicInformation(pFeature);
		_draftAngle = pFeature._draftAngle;
		_org = pFeature._org;
		_dir = pFeature._dir;
	}

	virtual ~FeatureDraft(void);

	void GetInfo(char * command);
	void AddInfo(TransCAD::IFeaturePtr spFeature);
	
	void Create(void);
	void Modify(char * command);

	void AskInfo(void);
	void Help(void);

private:
	Point3D _org, _dir;
	double _draftAngle;
};