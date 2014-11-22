// Cmsl.cpp : Defines the entry point for the console application.
//
//2014.11.22

#include "stdafx.h"
#include "CXml/xml.h"

using namespace JWXml;

int _tmain(int argc, _TCHAR* argv[])
{
	CoInitializeEx(NULL,COINIT_MULTITHREADED);

	CXml xml;
	xml.Open(L"\\DeviceAPI.xml");
	CXmlNodePtr root = xml.GetRoot();
	CXmlNode nodeRoot(root);

	CString name = nodeRoot.GetName();

	if(nodeRoot.HasChildren())
	{
		CString str("");
		nodeRoot.
		str = nodeRoot.GetAttribute(_T("desc"), str);
		int xj = nodeRoot.GetAttribute(_T("id"), 2);
		CXmlNodesPtr nodesPtr = nodeRoot.GetChildren();
		long nodesCount = nodesPtr->GetCount();
	}

	OutputDebugString(name);

	xml.Close();
	CoUninitialize();
	return 0;
}

