#include "file.h"

#include <iostream>
#include "folder.h"

using namespace std;

file::file(){}
file::file(string name="null") : name(std::move(name)) {}

file::file(string name, string expansion, string creationTime, string timeChange, folder parentFolder, int size = 0) : name(std::move(name)), size(size), expansion(std::move(expansion)), creationTime(std::move(creationTime)), timeChange(std::move(timeChange)), parentFolder(parentFolder) {}


void file::setName(string name)
{
	file::name = name;
}
string file::getName()
{
	return name;
}
int file::getSize() {
	return size;
}
void file::setSize(int size) {
	file::size = size;;
}

string file::getExpansion() {
	return expansion;
}
void file::setExpansion(string s) {
	file::expansion = s;
}
string file::getcreationTime() {
	return creationTime;
}
void file::setcreationTime(string s) {
	file::creationTime = s;
}
string file::gettimeChange() {
	return timeChange;
}
void file::settimeChange(string s) {
	file::timeChange = s;
}
folder file::getparentFolder() {
	return parentFolder;
}
void file::setparentFolder(folder s) {
	file::parentFolder = s;
}


file file::create() {
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

	file f = file(name,  expansion, creationTime, creationTime, fl, s);
	return f;
}
file file::deleteSmth() {
	file f = file("null");
	return f;
}
void file::rename(string s) {
	this->name = s;
	cout << "Successful rename to  " << s << endl;
}
void file::change(string s) {
	this->timeChange = s;
	cout << "Successful change time to " << s << endl;
}

void file::print() {
	cout << "name " << name << endl;
	cout << "size " << size << endl;
	cout << "expansion " << expansion << endl;
	cout << "creationTime " << creationTime << endl;
	cout << "timeChange " << timeChange << endl;
	cout << "parentFolder  " << parentFolder.getName() << endl;
	cout << endl;
}