#pragma once

#include <math.h>

#define MAX_CHAR_LIMIT	20
#define MAX_DIGITS		18
#define MAX_DEPTH		1000000
#define PI 3.14159265359
#define tolerance 0.0000001
#define infinity 100000000000000000


// CMD ���� Ÿ��
enum {
	BLACK,
	D_BLUE,
	D_GREEN,
	D_SKYBLUE,
	D_RED,
	D_VIOLET,
	D_YELLOW,
	GRAY,
	D_GRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE,
};

// ��ɾ� Ÿ��
namespace CommandType
{
	enum FeatureType
	{
		Sketch_Type,
		ProExtrude_Type,
		CutExtrude_Type,
		Fillet_Type,
		ProSweep_Type,
		CutSweep_Type,
		Chamfer_Type,
		ProRevolve_Type,
		CutRevolve_Type,
		RevolveWithAxis_Type,
		DatumPlaneOffset_Type,
		DatumPlaneEquation_Type,
		PatternRectangular_Type,
		PatternCircular_Type,
		HoleCounterbored_Type,
		HoleCountersunk_Type,
		HoleSimple_Type,
		Shell_Type,
		Loft_Type,
		Draft_Type,
		Offset_Type,
		BrepSolid_Type,
		NoFeature,
	};
	
	enum ReferenceType
	{
		Plane_Type,
		Brep_Type,
		Breps_Type,
		FaceByAxis_Type,
		EdgeByPoint_Type,
		EdgeByPoints_Type,
		Feature_Type,
		Features_Type,
		NoReference,
	};

	enum SketchItemType
	{
		CSYS_Type,
		Line_Type,
		CenterLine_Type,
		Circle_Type,
		Arc_Type,
		PolyLine_Type,
		Rectangle_Type,
		Polygon_Type,
		FilletLines_Type,
		ChamferLines_Type,
		ExtendLines_Type,
		TranslateSketch_Type,
		RotateSketch_Type,
		NoSketchItem,
	};

	enum GeneralType
	{
		NewPartDoc_Type,
		Terminate_Type,
		Reset_Type,
		Clear_Type,
		Restore_Type,
		Modify_Type,
		Delete_Type,
		Undo_Type,
		Redo_Type,
		Import_Type,
		Export_Type,
		Ask_Type,
		Parent_Type,
		Children_Type,
		Highlight_Type,
		ConvertMesh_Type,
		CustomFeature_Type,
		Help_Type,
		NoCommand,
	};
}

// ��� �ѱ� �� ���� ��ɾ� �����ϴ� Ŭ����. ��ɾ� Ÿ�԰� ������ �¾ƾ� �� (�ſ� �߿�!)
class CommandList {
public:

	CommandList()
	{
		// Ư¡���� ���� ��ɾ�
		char * FeatureKor[] = {"����ġ����", "����", "������", "�ʷ�", "����", "������",
								"è��", "ȸ��", "ȸ����", "��ȸ��", "�����", "�����2", "�簢����", 
								"��������", "ī���ͺ���", "ī���ͽ�ũ", "����", "��", "����Ʈ",
								"����", "������", "���ǥ���Է�"};
		char * FeatureEng[] = {"opensketch", "createproextrude", "createcutextrude", "createfillet", "createprosweep", "createcutsweep",
								"createchamfer", "createprorevolve", "createcutrevolve", "createrevolvewithaxis", "createdatumplaneoffset", "createdatumplaneequation", "createrectpattern",
								"createcircpattern", "createholecounterbored", "createholecountersunk", "createholesimple", "createshell", "createloft",
								"createdraft", "createoffset", "importbrep"};
		
		// Ư¡���� ���� ��ɾ� ����
		for (int i = 0; i < CommandType::NoFeature; ++i)
		{
			FeatureCommandList.push_back(make_pair((CommandType::FeatureType)i, FeatureKor[i]));
			FeatureCommandList.push_back(make_pair((CommandType::FeatureType)i, FeatureEng[i]));
		}
		
		// ���۷��� ���� ��ɾ�
		char * ReferenceKor[] = {"��鼱��", "��Ҽ���", "��ҵ鼱��", "�鼱��", "�����𼭸�����", "�����𼭸�����", "���ļ���", "���ĵ鼱��"};
		char * ReferenceEng[] = {"selectplane", "selectbrep", "selectbreps", "selectfacebyaxis", "selectedgebypoint", "selectedgebypoints", "selectfeature", "selectfeatures"};
		
		// ���۷��� ���� ��ɾ� ����
		for (int i = 0; i < CommandType::NoReference; ++i)
		{
			ReferenceCommandList.push_back(make_pair((CommandType::ReferenceType)i, ReferenceKor[i]));
			ReferenceCommandList.push_back(make_pair((CommandType::ReferenceType)i, ReferenceEng[i]));
		}

		// ����ġ��� ���� ��ɾ�
		char * SketchItemKor[] = {"��ǥ��", "��", "�߽ɼ�", "��", "ȣ", "���ἱ", "�簢��", "�ٰ���",
									"���ʷ�", "��è��", "������", "����ġ�̵�", "����ġȸ��"};
		char * SketchItemEng[] = {"setcoordinatesystem", "createline", "createcenterline", "createcircle", "createarc", "createpolyline", "createrectangle", "createpolygon",
									"filletlines", "chamferlines", "extendlines", "translatesketch", "rotatesketch"};
		
		// ����ġ��� ���� ��ɾ� ����
		for (int i = 0; i < CommandType::NoSketchItem; ++i)
		{
			SketchItemCommandList.push_back(make_pair((CommandType::SketchItemType)i, SketchItemKor[i]));
			SketchItemCommandList.push_back(make_pair((CommandType::SketchItemType)i, SketchItemEng[i]));
		}

		// ��Ÿ ��ɾ�
		char * GeneralKor[] = {"������", "�������", "����", "����", "����", "����", "����", "�ڷ�", "������",
								"�ҷ�����", "��������", "����", "�θ�", "�ڽ�", "����", "�Ž���ȯ","Ŀ��������", "����"};
		char * GeneralEng[] = {"newpartdoc", "exitall", "reset", "clear", "restore", "modify", "delete", "undo", "redo",
								"import", "export", "ask", "parent", "children", "highlight", "convertmesh", "customfeature", "help"};
		
		// ��Ÿ ��ɾ� ����
		for (int i = 0; i < CommandType::NoCommand; ++i)
		{
			GeneralCommandList.push_back(make_pair((CommandType::GeneralType)i, GeneralKor[i]));
			GeneralCommandList.push_back(make_pair((CommandType::GeneralType)i, GeneralEng[i]));
		}
	}

	// string�� �޾Ƽ� �ش� FeatureType�� ����
	CommandType::FeatureType GetFeatureType(string command) 
	{
		for (int i = 0; i < (int)FeatureCommandList.size(); ++i)
		{
			if (FeatureCommandList[i].second == command)
				return FeatureCommandList[i].first;
		}
		
		return CommandType::NoFeature;
	}
	
	// string�� �޾Ƽ� �ش� ReferenceType�� ����
	CommandType::ReferenceType GetReferenceType(string command) 
	{
		for (int i = 0; i < (int)ReferenceCommandList.size(); ++i)
		{
			if (ReferenceCommandList[i].second == command)
				return ReferenceCommandList[i].first;
		}
		
		return CommandType::NoReference;
	}
	
	// string�� �޾Ƽ� �ش� SketchItemType�� ����
	CommandType::SketchItemType GetSketchItemType(string command) 
	{
		for (int i = 0; i < (int)SketchItemCommandList.size(); ++i)
		{
			if (SketchItemCommandList[i].second == command)
				return SketchItemCommandList[i].first;
		}
		
		return CommandType::NoSketchItem;
	}
	
	// string�� �޾Ƽ� �ش� CommandType�� ����
	CommandType::GeneralType GetCommandType(string command) 
	{
		for (int i = 0; i < (int)GeneralCommandList.size(); ++i)
		{
			if (GeneralCommandList[i].second == command)
				return GeneralCommandList[i].first;
		}
		
		return CommandType::NoCommand;
	}

private:
	vector<pair<CommandType::FeatureType, string>> FeatureCommandList;
	vector<pair<CommandType::ReferenceType, string>> ReferenceCommandList;
	vector<pair<CommandType::SketchItemType, string>> SketchItemCommandList;
	vector<pair<CommandType::GeneralType, string>> GeneralCommandList;
};