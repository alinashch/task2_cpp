#pragma once
#include <iostream>
#include "operation.h"
#include "folder.h"

#include <string>

using namespace std;

class file :public operation {

private:
	string name;
	int size=0;

	string expansion;
	string creationTime;
	string timeChange;
	folder parentFolder;

public:
	file(string name, int size, string expansion,string creationTime,string timeChange,folder parentFolder ) {
		this->name = name;
		this->size = size;
		this->expansion = expansion;
		this->creationTime = creationTime;
		this->timeChange = timeChange;
		this->parentFolder = parentFolder;

	}

	file() {
		name = "null";
	}
	void setParent(folder parentFolder) {
		this->parentFolder = parentFolder;

	}
	
	file  create()  {
		cout << "Enter name ";
		string name;
		cin >> name;
		cout << "Enter expansion ";
		string expansion;
		cin >> expansion;
		cout << "Enter creation time ";
		string creationTime;
		cin >> creationTime;
		cout << "enter size ";
		int s;
		cin >> s;

		folder fl = folder();

		file f = file(name, s,expansion,  creationTime, creationTime, fl);
		return f;

	}
	string getName() override {
		return name;
	}

	void  renaming(string s) override {
		this->name = s;
		cout << "Successful rename to  " << s << endl;
	}

	
	void  change(string s) override {
		this->timeChange = s;
		cout << "Successful change time to " << s << endl;
	}

	file  deleteSmht() {
		file f = file();
		return f;
	}
	void  print() override {
		cout << "name " << name << endl;
		cout << "size " << size << endl;
		cout << "expansion " << expansion << endl;
		cout << "creationTime " << creationTime << endl;
		cout << "timeChange " << timeChange << endl;
		cout << "parentFolder  " << parentFolder.getName ()<< endl;
		cout << endl;

	}


};