#pragma once
#include <atlstr.h>//CStringͷ�ļ�
#include "vector"
using namespace std;

class FileManager
{
public:

	static CString GetFilePath();//��һ�����ڣ�ѡ��һ��TXT�ļ�
	static vector<vector<int>> GetFileIntData(CString path);//��ȡtxt��ÿ�о��εĿ��ߡ�����

};

