#pragma once
#include "TransCADScript.h"
#include "Feature.h"


class FeatureChamfer : public Feature
{
public:
	FeatureChamfer(Part * pPart, int featureType);	// �⺻ ������
	FeatureChamfer(FeatureChamfer & pFeature)		// ���� ������
		:Feature(pFeature.GetPart(), pFeature.GetType())
	{
		CopyBasicInformation(pFeature);
		_length = pFeature._length;
	}

	virtual ~FeatureChamfer(void);

	void GetInfo(char * command);
	void AddInfo(TransCAD::IFeaturePtr spFeature);
	
	void Create(void);
	void Modify(char * command);

	void AskInfo(void);
	void Help(void);

private:
	double _length;
};