#pragma once



#include <iostream>

#include "operation.cpp"
#include "folder.h"
using namespace std;
enum linksEnum {
	tough,
	symbolic
};



class link : public operation {
private:
	string name;

	string creationTime;
	string timeChange;


	folder links;
	linksEnum linkType=symbolic;
	folder parentFolder;


public:

	link(string name, string creationTime, string timeChange, folder links, linksEnum linkType, folder parentFolder) {
		this->name = name;
		this->creationTime = creationTime;
		this->timeChange = timeChange;
		this->links = links;
		this->linkType = linkType;
		this->parentFolder = parentFolder;
	}
	link() {
		name = "null";
	}

	linksEnum getEnum() {
		return linkType;
	}

	operation getlinks() {
		return links;
	}

	void setOpeartion(folder links) {
		this->links = links;

	}

	void setParent(folder parentFolder) {
		this->parentFolder = parentFolder;

	}

	void setType(linksEnum linkType) {
		this->linkType = linkType;

	}

	void print() override {
		cout << "name " << name << endl;
		cout << "creationTime " << creationTime << endl;
		cout << "timeChange " << timeChange << endl;
		cout << "parentFolder  " << parentFolder.getName() << endl;
		if (linkType == symbolic) {
			cout << "symbolic " << endl;
		}
		else {
			cout << "tough  " << endl;
		}
		cout << "name links " << links.getName() << endl;
		cout << endl;

	}
	folder getlink() {
		return links;

	}

	string getName() override {
		return name;
	}
	link  create()   {
		
		cout << "Enter name ";
		string name;
		cin >> name;
		cout << "Enter creation time ";
		string creationTime;
		cin >> creationTime;
		
		folder o = folder();
		folder f = folder();

		link l = link(name, creationTime,creationTime, o, symbolic, f );
		return l;
	}
	
	void  renaming(string s) override {
		this->name = s;
		cout << "Successful rename to  " << s << endl;
	}

	
	void  change(string s ) override {
		this->timeChange = s;
		cout << "Successful change time to " << s << endl;
	}

	link  deleteSmht() {
		
		link f = link();
		return f;
	}


};
