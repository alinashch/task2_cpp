#include "link.h"
#include "folder.h"
#include <iostream>

using namespace std;

link::link(string name="null") : name(std::move(name)) {}
link::link() {}
link::link(string name, string creationTime, string timeChange, folder links, folder parentFolder, linksEnum linkType = linksEnum::symbolic) : name(std::move(name)),  creationTime(std::move(creationTime)), timeChange(std::move(timeChange)), links(links), linkType(linkType), parentFolder(parentFolder) {}


void link::setName(string name)
{
	link::name = name;
}
 string link::getName()
{
	return name;
}
 
 string link::getcreationTime() {
	 return creationTime;
 }
 void link::setcreationTime(string s) {
	 link::creationTime = s;
 }
 string link::gettimeChange() {
	 return timeChange;
 }
 void link::settimeChange(string s) {
	 link::timeChange = s;
 }
 folder link::getparentFolder() {
	 return parentFolder;
 }
 void link:: setparentFolder(folder s) {
	 link::parentFolder = s;
 }
 folder link::getlinks() {
	 return links;
 }
 void link::setlinks(folder s) {
	 link::links = s;
 }
 linksEnum link::getlinkType() {
	 return linkType;
 }
 void link::setlinkType(linksEnum s) {
	 link::linkType = s;
 }



 void  link::renaming(string s) {
	 link::name = name;

 }


 void link::change(string s) {
	 link::timeChange = name;

 }
 link link::create() {
	 cout << "Enter name ";
	 string name;
	 cin >> name;
	 cout << "Enter creation time ";
	 string creationTime;
	 cin >> creationTime;

	 folder o = folder();
	 folder f = folder();

	 link l = link(name, creationTime, creationTime, o, f, linksEnum::symbolic);
	 return l;
 }


 void link::print() {
	 cout << "name " << name << endl;
	 cout << "creationTime " << creationTime << endl;
	 cout << "timeChange " << timeChange << endl;
	 cout << "parentFolder  " << parentFolder.getName() << endl;
	 if (linkType == linksEnum::symbolic) {
		 cout << "symbolic " << endl;
	 }
	 else {
		 cout << "tough  " << endl;
	 }
	 cout << "name links " << links.getName() << endl;
	 cout << endl;
 }


 link link:: deleteSmht() {

	 link f = link("null");
	 return f;
 }
 