#pragma once
#include "TransCADScript.h"
#include "Feature.h"


class FeatureSweep : public Feature
{
public:
	FeatureSweep(Part * pPart, int featureType);	// �⺻ ������
	FeatureSweep(FeatureSweep & pFeature)			// ���� ������
		:Feature(pFeature.GetPart(), pFeature.GetType())
	{
		CopyBasicInformation(pFeature);
		_sweepSketchName = pFeature._sweepSketchName;
	}

	virtual ~FeatureSweep(void);

	void GetInfo(char * command);
	void AddInfo(TransCAD::IFeaturePtr spFeature);
	
	void Create(void);
	void Modify(char * command);

	void AskInfo(void);
	void Help(void);

private:
	vector<string> _sweepSketchName;
};