#pragma once
#include "list"

using namespace std;


class FileInfo
{
public: wstring fileName; 
		wstring filePath; 
		wstring fileSize;
};

class Process
{
public: 
		static wchar_t* filepath;
		static list<FileInfo> CompareFiles();
		static int Find(wchar_t* wpath, int setsize, System::Windows::Forms::ProgressBar^ progressBar1);
		static System::String^ ConvertString(wstring str);
		static int DeleteFiles(System::Windows::Forms::ProgressBar^ progressBar1);
		static void ClearFileInfoList();
		static int CountFiles(wchar_t* wpath, int fileSize);
};

