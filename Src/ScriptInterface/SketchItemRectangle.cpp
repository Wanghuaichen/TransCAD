#include "stdafx.h"
#include "SketchItemRectangle.h"
#include "SketchItemLine.h"


SketchItemRectangle::SketchItemRectangle(FeatureSketch * pSketch, int sketchItemType)
	: SketchItem (pSketch, sketchItemType)
{
}

SketchItemRectangle::~SketchItemRectangle(void)
{
}

void SketchItemRectangle::GetInfo(char * command)
{
	token = StringToken::GetString( NULL, seps_blank, command );
	_points[0].X(atof(token.c_str()));
	
	token = StringToken::GetString( NULL, seps_blank, command );
	_points[0].Y(atof(token.c_str()));

	token = StringToken::GetString( NULL, seps_blank, command );
	_points[2].X(atof(token.c_str()));
	
	token = StringToken::GetString( NULL, seps_blank, command );
	_points[2].Y(atof(token.c_str()));
	
	TSIThrowExceptionIf<TSIArgumentException>(!CheckValid(token), "Insufficient input parameters!");
	TSIThrowExceptionIf<TSIArgumentException>(_points[0].X() == _points[2].X() && _points[0].Y() == _points[2].Y(), "Two points should be different!"); // �������� ������ ���� ���

	Create();
}

void SketchItemRectangle::Create(void)
{
	SetAllPoints();

	int _index = 1; // ���� �ѹ�

	for (int i = 0; i < 4; ++i)
	{
		char _lineName[256];
		sprintf_s(_lineName, "Line%d", _index);// ���� �̸�
		
		// ���� �̸��� Sketch item �� �������� ���� �� ���� index ����
		while (GetSketch()->GetSketchItemByName(_lineName) != NULL)
		{
			_index ++;
			sprintf_s(_lineName, "Line%d", _index);// ���� �̸�
		}
		
		Point2D sP, eP;
		sP = _points[i];

		if (i == 3) // ������ ������ �������� ����
			eP = _points[0];
		else
			eP = _points[i+1];

		SketchItemLine * pLine = new SketchItemLine(GetSketch(), (int)0, _lineName, sP, eP);
		GetSketch()->SetSketchItem(pLine);
		pLine->Create();
		pLine->SetCreated(true);

		_index ++;
	}
}

void SketchItemRectangle::SetAllPoints(void)
{
	// �Է¹��� �� �����κ��� �ٸ� �� �� ����
	if (abs(_points[0].X() - _points[2].X()) == 0) // x ��ǥ�� ���� ���, �� ���� �밢������ �ϴ� ���簢��
	{
		_points[1].X(_points[0].X() + (_points[0].Y() + _points[2].Y())/2);
		_points[1].Y((_points[0].Y() + _points[2].Y())/2);

		_points[3].X(_points[0].X() - (_points[0].Y() + _points[2].Y())/2);
		_points[3].Y((_points[0].Y() + _points[2].Y())/2);
	}
	else if (abs(_points[0].Y() - _points[2].Y()) == 0) // y ��ǥ�� ���� ���, �� ���� �밢������ �ϴ� ���簢��
	{
		_points[1].X((_points[0].X() + _points[2].X())/2);
		_points[1].Y(_points[0].Y() + (_points[0].X() + _points[2].X())/2);

		_points[3].X((_points[0].X() + _points[2].X())/2);
		_points[3].Y(_points[0].Y() - (_points[0].X() + _points[2].X())/2);
	}
	else // �Ϲ����� ���
	{
		_points[1].X(_points[0].X());
		_points[1].Y(_points[2].Y());

		_points[3].X(_points[2].X());
		_points[3].Y(_points[0].Y());
	}
}

void SketchItemRectangle::Help(void)
{
	cout << " [createrectangle p1 p2 p3 p4]" << endl;
	cout << " -p1 : " << "First Point (X)" << endl;
	cout << " -p2 : " << "First Point (Y)" << endl;
	cout << " -p3 : " << "Second Point (X)" << endl;
	cout << " -p4 : " << "Second Point (Y)" << endl;
	cout << " [EXAMPLE] " << "createrectangle 0 0 100 100" << endl;
	cout << " [NOTE 1] " << "This function should be called after 'opensketch' function" << endl;
	cout << " [NOTE 2] " << "Line names will be automatically assigned clockwise" << endl;
}