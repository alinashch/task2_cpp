#pragma once
using namespace std;
#include <string>
#include "folder.h"
#include "operation.h"

enum class linksEnum {
	tough,
	symbolic
};


class link : public operation
{
public:
	link(string name);
	link(string name,  string creationTime, string timeChange,folder links,  folder parentFolder , linksEnum linkType );
	link();
	void  renaming(string s);
	link create();

	void  change(string s);
	link  deleteSmht();

	void  print();
	string  getName();

	void setName(string s);
	string getcreationTime();
	void setcreationTime(string s);
	string gettimeChange();
	void settimeChange(string s);
	folder getparentFolder();
	void setparentFolder(folder s);
	folder getlinks();
	void setlinks(folder s);
	linksEnum getlinkType();
	void setlinkType(linksEnum s);
private:
	string name="null";

	string creationTime;
	string timeChange;

	folder links;

	linksEnum linkType=linksEnum::symbolic ;
	folder parentFolder;
};

