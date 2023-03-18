
#pragma once

using namespace std;
#include <string>
#include "operation.h"

#include "folder.h"
class file : public operation
{
public:
	file(string name);
	file(string name, string expansion, string creationTime, string timeChange, folder parentFolder, int size);
	file();
	file create();
	file deleteSmth();
	void rename(string s);
	void change(string s);
	void print();
	string getName();
	void setName(string s);
	int getSize();
	void setSize(int size);
	string getExpansion();
	void setExpansion(string s);
	string getcreationTime();
	void setcreationTime(string s);
	string gettimeChange();
	void settimeChange(string s);
	folder getparentFolder();
	void setparentFolder(folder s);
private:
	string name="null";
	int size{0};

	string expansion;
	string creationTime;
	string timeChange;
	folder parentFolder;
};

