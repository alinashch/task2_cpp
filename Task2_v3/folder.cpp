#include "folder.h"
#include <iostream>

folder::folder(){}
folder::folder(string name="null") : name(std::move(name))  {}

folder::folder(string name, string creationTime, string timeChange, folderEnum folderType= folderEnum::usual) : name(std::move(name)), creationTime(std::move(creationTime)), timeChange(std::move(timeChange)), folderType(folderType) {}

string folder::getName() {
	return name;
}
void folder::setName(string s) {
	folder::name = s;
}
string folder::getcreationTime() {
	return creationTime;
}
void folder::setcreationTime(string s) {
	folder::creationTime = s;
}
string folder::gettimeChange() {
	return timeChange;
}
void folder::settimeChange(string s) {
	folder::timeChange = s;
}
folderEnum folder::getfolderType() {
	return folderType;
}
void folder::setfolderType(folderEnum folderEnum) {
	folder::folderType = folderEnum;
}

void folder:: print() {
	cout << "name " << name << endl;
	cout << "creationTime " << creationTime << endl;
	cout << "timeChange " << timeChange << endl;
	cout << "type ";
	if (folderType == folderEnum::root) {
		cout << "root " << endl;
	}
	else {
		cout << "usual  " << endl;
	}
	cout << endl;
}
folder  folder::create() {
	cout << "create folder " << endl;

	cout << "Enter name " << endl;
	cin >> name;
	cout << "Enter  Creation Time " << endl;
	cin >> creationTime;

	folder f = folder(name, creationTime, creationTime, folderEnum::root);
	return f;
}
folder  folder::deleteSmth() {
	folder f = folder("null");
	return f;
}
void folder::rename(string s) {
folder:name = s;
}
void  folder::change(string s) {
	folder::timeChange = s;
}

