#pragma once
#include "TransCADScript.h"
#include "Feature.h"


class FeatureOffset : public Feature
{
public:
	FeatureOffset(Part * pPart, int featureType);	// �⺻ ������
	FeatureOffset(FeatureOffset & pFeature)			// ���� ������
		:Feature(pFeature.GetPart(), pFeature.GetType())
	{
		CopyBasicInformation(pFeature);
		_offsetThickness = pFeature._offsetThickness;
	}

	virtual ~FeatureOffset(void);

	void GetInfo(char * command);
	void AddInfo(TransCAD::IFeaturePtr spFeature);
	
	void Create(void);
	void Modify(char * command);

	void AskInfo(void);
	void Help(void);

private:
	double _offsetThickness;
};