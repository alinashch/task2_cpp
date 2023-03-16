#pragma once
#include <iostream>
#include "operation.h"
#include <string>
#include "common.h"

using namespace std;
enum folderEnum {
	root,
	usual
};
class folder :public  operation {
private:
	
	string name;
	string creationTime;
	string timeChange;

	folderEnum folderType=usual;
	

public:
	
	folder(string name, string creationTime, string timeChange, folderEnum folderType) {
		this->name = name;
		this->creationTime = creationTime;
		this->timeChange = timeChange;
		this->folderType = folderType;

	}
	folder() {
		name = "null";

	}
	string getName() override {
		return name;
	}

	folderEnum getFolderType() {
		return folderType;
	}
	


	void print() override {
		cout << "name " << name << endl;
		cout << "creationTime " << creationTime << endl;
		cout << "timeChange " << timeChange << endl;
		cout << "type ";
		if (folderType == root) {
			cout << "root " << endl;
		}
		else {
			cout << "usual  " << endl;
		}
		cout << endl;
	}
	folder  create() {
		cout << "create folder " << endl;
		
		cout << "Enter name " << endl;
		cin >> name;
		cout << "Enter  Creation Time " << endl;
		cin >> creationTime;
		
		folder f = folder(name, creationTime, creationTime, usual);
		return f;
	}

	void  renaming(string s) override {
		this->name = s;
		cout << "Successful rename to  "<< s <<endl;
	}


	void  change(string s) override {
		this->timeChange = s;
		cout << "Successful change time to " << s << endl;

	}

	folder  deleteSmht ()  {
		folder f = folder();
		return f;
	}
	
};