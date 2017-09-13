#include "stdafx.h"
#include "SketchItemChamfer.h"
#include "SketchItemLine.h"
#include "SketchItemArc.h"


SketchItemChamfer::SketchItemChamfer(FeatureSketch * pSketch, int sketchItemType)
	: SketchItem (pSketch, sketchItemType)
{
}

SketchItemChamfer::~SketchItemChamfer(void)
{
}

void SketchItemChamfer::GetInfo(char * command)
{
	token = StringToken::GetString( NULL, seps_blank, command );
	_lineNames.push_back(token);

	token = StringToken::GetString( NULL, seps_blank, command );
	_lineNames.push_back(token);

	token = StringToken::GetString( NULL, seps_blank, command );
	_length = atof(token.c_str());
	
	TSIThrowExceptionIf<TSIArgumentException>(!CheckValid(token), "Insufficient input parameters!");
	TSIThrowExceptionIf<TSIArgumentException>(!GetSketch()->GetSketchItemByName(_lineNames[0]) || !GetSketch()->GetSketchItemByName(_lineNames[1]), "Enter existing lines!");
	TSIThrowExceptionIf<TSIArgumentException>(GetSketch()->GetSketchItemByName(_lineNames[0])->GetType() != 0, "Only line type is allowed!");
	TSIThrowExceptionIf<TSIArgumentException>(GetSketch()->GetSketchItemByName(_lineNames[1])->GetType() != 0, "Only line type is allowed!");
	TSIThrowExceptionIf<TSIArgumentException>(_lineNames[0] == _lineNames[1], "Two lines should be different!");
	TSIThrowExceptionIf<TSIArgumentException>(_length <= 0, "Length should be greater than zero!");
	TSIThrowExceptionIf<TSIArgumentException>(!GetLineStartEnd(), "Invalid input parameters!");

	Create();
}

void SketchItemChamfer::Create(void)
{
	SketchItemLine * pFirstLine = dynamic_cast<SketchItemLine *>(GetSketch()->GetSketchItemByName(_lineNames[0]));
	SketchItemLine * pSecondLine = dynamic_cast<SketchItemLine *>(GetSketch()->GetSketchItemByName(_lineNames[1]));
	
	// ȣ�� �̸� ����. ������ �����ϴ� ȣ�� ������ ����
	int _index = 1;

	for (int i = 0; i < GetSketch()->GetSketchItemListSize(); ++i)
		if (GetSketch()->GetSketchItem(i)->GetType() == 0)
			_index++;

	char _lineName[256];
	sprintf_s(_lineName, "Line%d", _index);

	// �� ���ΰ� ȣ�� ����
	pFirstLine->Create();
		
	SketchItemLine * pLine = new SketchItemLine(GetSketch(), (int)0, _lineName, _contactPoint[0], _contactPoint[1]);
	
	GetSketch()->SetSketchItem(pLine);
	pLine->Create();
	
	pSecondLine->Create();
	//

	if (GetSketch()->IsModified())
	{
		pFirstLine->SetModified(true);
		pLine->SetCreated(true);
		pSecondLine->SetModified(true);
	}
}

bool SketchItemChamfer::GetLineStartEnd(void)
{
	Point2D _linePoints[2][2];			// �� ������ ������ �� ����
	Point2D _intPoint, _nIntPoint[2];	// ����(_intPoint) �� ������ ���� (_nIntPoint)
	Direct2D uV[2];						// uV[0]: ù ��° ������ ���⺤��, uV[1]: �� ��° ������ ���� ����, cV: �߽� ����
	double a[2], b[2];					// y = ax + b������ ����(a)�� y����(b)
	
	SketchItemLine * pLines[2];

	// �Է� ���� �� ������ ������ ������
	for (int i = 0; i < 2; ++i)
	{
		pLines[i] = dynamic_cast<SketchItemLine *>(GetSketch()->GetSketchItemByName(_lineNames[i]));
		_linePoints[i][0].SetXY(pLines[i]->GetStartPoint());
		_linePoints[i][1].SetXY(pLines[i]->GetEndPoint());
	}

	 // �� ������ ������ ���ϱ�
	for (int i = 0; i < 2; ++i)
		GetLineEquation(_linePoints[i][0], _linePoints[i][1], a[i], b[i]);

	 // �� ������ ���� ���ϱ�
	if (!GetIntersectingPoint(a, b, _intPoint))
		return false;

	// �� ������ ���� �������κ��� �� �ָ� ������ �� �� ���� ���� ���ϱ�
	for (int i = 0; i < 2; ++i)
	{
		GetDistantPoint(_intPoint, _linePoints[i][0], _linePoints[i][1], _nIntPoint[i]);
		uV[i].SetXY(_nIntPoint[i] - _intPoint);
		uV[i] = uV[i].Norm();

		_contactPoint[i].SetXY(_intPoint + uV[i].operator*(_length));
	}

	// �ִ� ��� ���� ���ϱ�
	if (!CheckMaximumLength(_intPoint.GetDistance(_nIntPoint[0]), _intPoint.GetDistance(_nIntPoint[1])))
		return false;

	// �� ������ ��ǥ ���� �� ����ġ���� ����
	for (int i = 0; i < 2; ++i)
	{
		if (!IsDifferentPoint(_nIntPoint[i], _contactPoint[i]))
			return false;

		pLines[i]->SetStartPoint(_nIntPoint[i]);
		pLines[i]->SetEndPoint(_contactPoint[i]);
		
		GetSketch()->GetEditorPtr()->DeleteByName(pLines[i]->GetName().c_str());
	}
	
	return true;
}

bool SketchItemChamfer::CheckMaximumLength(double dist1, double dist2)
{
	// �ִ� ��� ����
	double _maxLength = 0;

	if (dist1 > dist2)
		_maxLength = dist2;
	else
		_maxLength = dist1;

	if (_length >= _maxLength)
	{
		cout << "Length should be less than " << _maxLength << "!" << endl;
		return false;
	}
	else
		return true;
}

void SketchItemChamfer::Help(void)
{
	cout << " [chamferlines p1 p2 p3]" << endl;
	cout << " -p1 : " << "First Line Name" << endl;
	cout << " -p2 : " << "Second Line Name" << endl;
	cout << " -p3 : " << "Chamfer Length" << endl;
	cout << " [EXAMPLE] " << "chamferlines Line1 Line2 20" << endl;
	cout << " [NOTE 1] " << "This function is for chamfering two connected straight lines" << endl;
	cout << " [NOTE 2] " << "This function should be called after 'opensketch' function" << endl;
	cout << " [NOTE 3] " << "New line name will be automatically assigned" << endl;
}