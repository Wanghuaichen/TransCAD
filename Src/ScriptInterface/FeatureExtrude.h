#pragma once
#include "TransCADScript.h"
#include "Feature.h"


class FeatureExtrude : public Feature
{
public:
	FeatureExtrude(Part * pPart, int featureType);	// �⺻ ������
	FeatureExtrude(FeatureExtrude & pFeature)		// ���� ������
		:Feature(pFeature.GetPart(), pFeature.GetType())
	{
		CopyBasicInformation(pFeature);
		_startDepth = pFeature._startDepth;
		_endDepth = pFeature._endDepth;
		_startCond = pFeature._startCond;
		_endCond = pFeature._endCond;
		_isFlip = pFeature._isFlip;
		_sketchName = pFeature._sketchName;
	}

	virtual ~FeatureExtrude(void);

	void GetInfo(char * command);
	void AddInfo(TransCAD::IFeaturePtr spFeature);
	
	void Create(void);
	void Modify(char * command);

	void AskInfo(void);
	void Help(void);

private:
	double _startDepth, _endDepth;
	TransCAD::StdExtrudeEndType _startCond, _endCond;
	VARIANT_BOOL _isFlip;
	string _sketchName;
};