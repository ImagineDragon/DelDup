#include "FindFiles.h"
#include "msclr\marshal_cppstd.h"
#include "io.h"


using namespace std;
using namespace System;
using namespace msclr::interop;

bool ptrNameSorter(FileInfo a, FileInfo b)	//names sort helper for list
{
	return a.fileName < b.fileName;
}

bool ptrSizeSorter(FileInfo a, FileInfo b)	//size sort helper for list
{	
	return (a.fileSize.length()) == (b.fileSize.length()) ? a.fileSize < b.fileSize : (a.fileSize.length()) < (b.fileSize.length());
}

list<FileInfo> duplicates;
list<FileInfo> FileInfoList;
FileInfo fileInfo;

void Process::ClearFileInfoList()
{
	FileInfoList.clear();
	duplicates.clear();
}

int Process::Find(wchar_t* wpath, int setsize, System::Windows::Forms::ProgressBar^ progressBar1)
{
	setlocale(LC_ALL, "Russian");

	_finddata_t fd;
	int rc;
	long hFile;
	char mask[260];
	char subdir[260];

	char path[256];
	wcstombs(path, wpath, sizeof(path));

	sprintf(mask, "%s\\*.*", path);

	for (rc = (hFile = _findfirst(mask, &fd)); rc != -1; rc = _findnext(hFile, &fd)) {
		if (fd.name[0] != '.') {
			if (fd.attrib & _A_SUBDIR) {
				sprintf(subdir, "%s\\%s", path, fd.name);
				wchar_t wsubdir[sizeof(subdir)];
				mbstowcs(wsubdir, subdir, sizeof(subdir));
				Find(wsubdir, setsize, progressBar1);
			}
			else {
				if (fd.size > setsize )
				{
					string name = fd.name;

					wchar_t fname[sizeof(fd.name)];
					mbstowcs(fname, fd.name, sizeof(fd.name));

					wstring fsize;
					double dsize = fd.size;
					int size = ceil(dsize / 1024);
					int i = 0;
					int mas[10];
					mas[i] = size;
					while (mas[i] > 1000)
					{
						mas[i] = size % 1000;
						mas[i + 1] = size / 1000;
						i++;
					}
					int j = i;
					for (; i > 0; i--)
					{
						if (i < j)
						{
							if (mas[i] < 100)
							{
								fsize += L"0";
							}
							else if (mas[i] < 10)
							{
								fsize += L"00";
							}
						}
						fsize += to_wstring(mas[i]);
						fsize += L",";
					}
					if (j > 0)
					{
						if (mas[0] < 100)
						{
							fsize += L"0";
						}
						else if (mas[0] < 10)
						{
							fsize += L"00";
						}
					}
					fsize += to_wstring(mas[0]);
					
					fsize += L"สม";

					fsize.erase(fsize.find_last_not_of('0') + 1, string::npos);

					fileInfo = { fname, wpath, fsize };
					FileInfoList.push_back(fileInfo);
					progressBar1->PerformStep();
				}
			}
		}
	}

	return 0;
}

list<FileInfo> Process::CompareFiles()
{
	if (FileInfoList.size() > 1)
	{
		FileInfoList.sort(ptrSizeSorter);
		duplicates = FileInfoList;

		for (list<FileInfo>::iterator it = duplicates.begin(); next(it) != duplicates.end();)
		{
			FileInfo file1 = *it;
			FileInfo file2 = *next(it);

			if (file1.fileSize != file2.fileSize)
			{
				it = duplicates.erase(it);
			}
			else { ++it; }
			if (next(it) == duplicates.end())
			{
				duplicates.erase(it);
				break;
			}
		}

		duplicates.sort(ptrSizeSorter);
	}
		return duplicates;
}

int Process::DeleteFiles(System::Windows::Forms::ProgressBar^ progressBar1)
{
	if (duplicates.empty())
	{
		return 1;
	}
	for each (FileInfo file in duplicates)
	{
		wstring wpath = file.filePath + L"\\" + file.fileName;
		DeleteFileW(wpath.c_str());
		progressBar1->PerformStep();
	}
	duplicates.clear();
	return 0;
}

int Process::CountFiles(wchar_t* wpath, int fileSize)
{
	_finddata_t fd;
	int rc;
	long hFile;
	char mask[260];
	char subdir[260];
	int count;

	char path[256];
	wcstombs(path, wpath, sizeof(path));

	sprintf(mask, "%s\\*.*", path);

	for (rc = (hFile = _findfirst(mask, &fd)); rc != -1; rc = _findnext(hFile, &fd)) {
		if (fd.name[0] != '.') {
			if (fd.attrib & _A_SUBDIR) {
				sprintf(subdir, "%s\\%s", path, fd.name);
				wchar_t wsubdir[sizeof(subdir)];
				mbstowcs(wsubdir, subdir, sizeof(subdir));
				count += CountFiles(wsubdir, fileSize);
			}
			else {
				if (fd.size > fileSize)
				{
					count++;
				}
			}
		}
	}
	return count;
}

String^ Process::ConvertString(wstring str)
{
	String^ String = marshal_as<System::String^>(str);

	return String;
}