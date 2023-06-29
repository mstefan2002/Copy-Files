#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS

#include <fstream>
#include <string.h>
#include <exception>
#include <iostream>
#include <string>
#include <sstream>
#include "dirent.h"
#include <direct.h>

using namespace std;

bool existDir(const char *path)
{
	DIR* dir = opendir(path);
	if (dir == NULL)
		return false;

	closedir(dir);
	return true;
}
void copyFile(const char *SRC, const char* DEST)
{
	char buf[BUFSIZ];
	size_t size;

	FILE* source = fopen(SRC, "rb");
	if (source == NULL)
	{
		cout << "\nFile " << SRC << " not found.\n";
		return;
	}
	FILE* dest = fopen(DEST, "wb");
	if (dest == NULL)
		return;

	while (size = fread(buf, 1, BUFSIZ, source))
		fwrite(buf, 1, size, dest);

	fclose(source);
	fclose(dest);
	cout << "\nCopied file " << SRC << " to " << DEST << "\n";
}
void Checking(const string path)
{
	string myText = path;
	istringstream iss(myText);
	string token;
	string temp;
	while (getline(iss, token, '\\'))
	{
		temp += token + "\\";
		if (!existDir(temp.c_str()))
			_mkdir(temp.c_str());
	}
}

int main()
{
	cout << "File from which we retrieve the file locations: \n";
	string fileName;
	getline(cin, fileName);

	cout << "\nAdd a prefix to the file locations? (y/n): ";
	char YesOrNo;
	cin >> YesOrNo;
	cin.get();
	YesOrNo = tolower(YesOrNo);

	string prefixFolder;
	if (YesOrNo == 'y')
	{
		cout << "\nEnter the prefix: \n";
		getline(cin, prefixFolder);
		if (prefixFolder.back() != '\\')
			prefixFolder += "\\";
	}

	cout << "\nDestination location:\n";
	string destFolder, temp, cpyDestFolder;
	getline(cin, destFolder);
	cpyDestFolder = destFolder;
	ifstream f(fileName.c_str());
	while (!f.eof())
	{
		f >> temp;
		destFolder = cpyDestFolder;
		destFolder += "\\" + temp;
		if (YesOrNo == 'y')
			temp = prefixFolder + temp;

		Checking(destFolder.substr(0, destFolder.find_last_of("\\/")));
		copyFile(temp.c_str(), destFolder.c_str());
	}
	f.close();
	return 0;
}