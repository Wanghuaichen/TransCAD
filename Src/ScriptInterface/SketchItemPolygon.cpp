#include "stdafx.h"
#include "SketchItemPolygon.h"
#include "SketchItemLine.h"


SketchItemPolygon::SketchItemPolygon(FeatureSketch * pSketch, int sketchItemType)
	: SketchItem (pSketch, sketchItemType)
{
}

SketchItemPolygon::~SketchItemPolygon(void)
{
}

void SketchItemPolygon::GetInfo(char * command)
{
	token = StringToken::GetString( NULL, seps_blank, command );
	_edgeNumber = atoi(token.c_str());

	token = StringToken::GetString( NULL, seps_blank, command );
	_length = atof(token.c_str());
	
	TSIThrowExceptionIf<TSIArgumentException>(!CheckValid(token), "Insufficient input parameters!");
	TSIThrowExceptionIf<TSIArgumentException>(_edgeNumber <= 2, "The number of edges should be greater than two!");
	TSIThrowExceptionIf<TSIArgumentException>(_length <= 0, "Length should be greater than zero!");
	
	Create();
}

void SketchItemPolygon::Create(void)
{
	SetAllPoints();

	int _index = 1;	// ���� �ѹ�

	for (int i = 0; i < _edgeNumber; ++i)
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
		
		if (i == _edgeNumber - 1)
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

void SketchItemPolygon::SetAllPoints(void)
{
	// ��n������ �� ����
	double angle = PI*(_edgeNumber-2)/_edgeNumber;
	
	// ȸ�� ��� (�ݽð�)
	Matrix2D rotMat;
	rotMat.SetRows(Vector2D(cos(angle), -sin(angle)), Vector2D(sin(angle), cos(angle)));
	
	// ���� ��
	_points.push_back(Point2D(0,0));

	// ���� ����
	Vector2D vec(1, 0);

	// ���� ��ǥ�� ������� ���Ѵ�
	for (int i = 0; i < _edgeNumber - 1; ++i)
	{
		vec = MrMath::Multiply(rotMat, vec); // ���͸� ������ŭ ȸ��

		 // �� ��ǥ ���ؼ� �����ϱ�
		Point2D temp(_points[i] + vec*_length);
		_points.push_back(temp);

		vec = vec*(-1);	// ���� ���� 180�� ��ȯ
	}

	// �ٰ����� ����, ����
	double area = 0, centerX = 0, centerY = 0;
	
	for (int i = 0; i < _edgeNumber - 1; ++i)
	{
		area = area + (_points[i].X()*_points[i+1].Y() - _points[i+1].X()*_points[i].Y());
		centerX = centerX + (_points[i].X() + _points[i+1].X())*(_points[i].X()*_points[i+1].Y() - _points[i+1].X()*_points[i].Y());
		centerY = centerY + (_points[i].Y() + _points[i+1].Y())*(_points[i].X()*_points[i+1].Y() - _points[i+1].X()*_points[i].Y());
	}
	
	area = abs(0.5*area);
	centerX = abs(centerX/(6*area));
	centerY = abs(centerY/(6*area));

	// �ٰ����� ������ �������� ��ġ��Ű��
	for (int i = 0; i < _edgeNumber; ++i)
	{
		// ������ �������� �̵�
		Point2D temp(_points[i].X() - centerX, _points[i].Y() - centerY);
		
		// �Ҽ��� �Ʒ� 9�� ° �ڸ����� �ݿø�
		temp.X(MrMath::Round(temp.X()));
		temp.Y(MrMath::Round(temp.Y()));
		
		// ����
		_points[i].SetXY(temp);
	}
}

void SketchItemPolygon::Help(void)
{
	cout << " [createpolygon p1 p2]" << endl;
	cout << " -p1 : " << "The number of edges" << endl;
	cout << " -p2 : " << "Length of an edge" << endl;
	cout << " [EXAMPLE] " << "createpolygon 5 20" << endl;
	cout << " [NOTE 1] " << "This function is for creating a regular polygon" << endl;
	cout << " [NOTE 2] " << "This function should be called after 'opensketch' function" << endl;
}