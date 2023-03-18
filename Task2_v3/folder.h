#pragma once
using namespace std;
#include <string>
#include "folder.h"
#include "operation.h"
enum class folderEnum {
	root,
	usual
};
class folder : public operation
{
public :
	folder();
	folder(string name);
	folder(string name, string creationTime, string timeChange, folderEnum folderType);
	string getName();
	void setName(string s);
	string getcreationTime();
	void setcreationTime(string s);
	string gettimeChange();
	void settimeChange(string s);
	folderEnum getfolderType();
	void setfolderType(folderEnum folderEnum);
	folder create();
	folder deleteSmth();
	void rename(string s);
	void change(string s);
	void print();
private:
	string name="null";
	string creationTime;
	string timeChange;

	folderEnum folderType=folderEnum::usual ;

};

