#include "stdafx.h"
#include "File.h"
#include <io.h>

// ������ �ҷ����� �Լ�
void File::Import(char * command, Part * pPart)
{
	string token;
	
	TSIThrowExceptionIf<TSIArgumentException>((token = StringToken::GetString( NULL, seps_blank, command )) == "FAIL", "Insufficient input parameters!");
	
	string ext = token.substr(token.rfind("."), token.size() - token.rfind("."));
				
	if (ext == ".CATScript" || ext == ".CATscript" || ext == ".catscript" || ext == ".CATPart")
		pPart->GetPartDocumentPtr()->ImportFromCATIA(token.c_str());
	else if (ext == ".prt")
		pPart->GetPartDocumentPtr()->ImportFromUG(token.c_str());
	else if (ext == ".xml")
		pPart->GetPartDocumentPtr()->ImportFromXML(token.c_str());
	else if (ext == ".stp" || ext == ".sat" || ext == ".igs" || ext == ".step" || ext == ".iges")
		pPart->GetPartDocumentPtr()->ImportFromBrep(token.c_str());
}

// ������ �������� �Լ�
void File::Export(char * command, Part * pPart)
{
	string token;
	
	TSIThrowExceptionIf<TSIArgumentException>((token = StringToken::GetString( NULL, seps_blank, command )) == "FAIL", "Insufficient input parameters!");
	
	string ext = token.substr(token.rfind("."), token.size() - token.rfind("."));

	if (ext == ".CATScript" || ext == ".CATscript" || ext == ".catscript" || ext == ".CATPart")
		pPart->GetPartDocumentPtr()->ExportToCATIA(token.c_str());
	else if (ext == ".prt")
		pPart->GetPartDocumentPtr()->ExportToUG(token.c_str());
	else if (ext == ".x3d" || ext == ".obj" || ext == ".stl" || ext == ".ply" || ext == ".wrl" || ext == ".pdf")
		pPart->GetPartDocumentPtr()->ExportToMesh(token.c_str());
	else if (ext == ".stp" || ext == ".sat" || ext == ".igs")
		pPart->GetPartDocumentPtr()->ExportToBrep(token.c_str());
	else if (ext == ".xml" || ext == ".XML")
		pPart->GetPartDocumentPtr()->ExportToXML(token.c_str());
}

// �ϳ��� Mesh�� �ٸ� �������� ��ȯ�ϴ� �Լ�
void File::ConvertMesh(char * command, Part * pPart)
{
	string token;
	TSIThrowExceptionIf<TSIArgumentException>((token = StringToken::GetString( NULL, seps_blank, command )) == "FAIL", "Insufficient input parameters!");

	string source = token;
	int pathValid = _access(source.c_str(), 0);

	TSIThrowExceptionIf<TSIArgumentException>(pathValid == -1, "Invalid file path!");
	TSIThrowExceptionIf<TSIArgumentException>((token = StringToken::GetString( NULL, seps_blank, command )) == "FAIL", "Insufficient input parameters!");

	string target = token;

	pPart->GetPartDocumentPtr()->ConvertMesh(source.c_str(), target.c_str());
}