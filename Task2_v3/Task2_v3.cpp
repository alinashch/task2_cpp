#include <iostream>
#include "folder.h"
#include "file.h"
#include "link.h"
using namespace std;
link ls[1000];
file fls[1000];
folder  fs[1000];


void printFolder(folder op[]) {
	for (int i = 0; i < 1000; i++) {
		if (op[i].getName() != "null") {
			op[i].print();
		}
	}
}
void printFile(file op[]) {
	for (int i = 0; i < 1000; i++) {
		if (op[i].getName() != "null") {
			op[i].print();
		}
	}
}
void printLink(link op[]) {
	for (int i = 0; i < 1000; i++) {
		if (op[i].getName() != "null") {
			op[i].print();
		}
	}
}
void printALL(folder fs[], file fls[], link ls[]) {
	cout << "all" << endl;
	cout << "folder " << endl;
	printFolder(fs);
	cout << endl;
	cout << "file " << endl;

	printFile(fls);
	cout << endl;

	cout << "link " << endl;

	printLink(ls);
	cout << endl;

}

int main()
{
	folder f = folder("null");
	file fl = file("null");
	link l = link("null");
	operation o = operation();

	operation o1[100];
	folder MyRoot = folder("root", "00:00", "00:00", folderEnum::root);
	fs[0] = MyRoot;

	int qqqq = 0;
	while (qqqq != 10) {
		printALL(fs, fls, ls);
		cout << "1-  folder " << endl;
		cout << "2-  link " << endl;
		cout << "3-  file " << endl;
		cout << "10-  end " << endl;

		int x;
		cin >> x;
		cout << "1-  create " << endl;
		cout << "2-  delete " << endl;
		cout << "3-  rename " << endl;
		cout << "4-  change " << endl;
		cout << "5-  print " << endl;
		int y;
		cin >> y;
		if (x == 1) {
			if (y == 1) {
				folder f1 = f.create();
				for (int i = 0; i < 1000; i++) {
					if (fs[i].getName() == "null") {
						fs[i] = f;
						break;
					}
				}
			}
			else if (y == 2) {
				string name;
				cout << "Enter name " << endl;
				cin >> name;
				for (int i = 0; i < 1000; i++) {
					if (fs[i].getName() == name) {
						if (fs[i].getfolderType() != folderEnum::root) {
							fs[i] = fs[i].deleteSmth();
							break;
						}
						else
						{
							cout << "Can not delete root  " << endl;
							break;
						}

					}
				}
			}

			else if (y == 3) {
				string name;
				cout << "Enter name " << endl;
				cin >> name;
				for (int i = 0; i < 1000; i++) {
					if (fs[i].getName() == name) {
						cout << "New name? ";
						string name1;
						cin >> name1;
						fs[i].renaming(name1);
						break;
					}
				}

			}
			else if (y == 4) {
				string name;
				cout << "Enter name " << endl;
				cin >> name;
				for (int i = 0; i < 1000; i++) {
					if (fs[i].getName() == name) {
						cout << "New time? ";
						string time;
						cin >> time;
						fs[i].change(time);
						break;
					}
				}
			}
			else if (y == 5) {
				printFolder(fs);
			}

		}




		else if (x == 2) {
			if (y == 1) {
				link l1 = l.create();
				for (int i = 0; i < 1000; i++) {
					if (ls[i].getName() == "null") {

						cout << "enter name of links argument  " << endl;
						string name;
						cin >> name;
						cout << "enter name parent folder" << endl;
						string namePar;
						cin >> namePar;
						cout << "chose tough or symbolic" << endl;
						string type;
						cin >> type;
						if (type == "tough") {
							l1.setlinkType(linksEnum::tough);
						}
						for (int j = 0; j < 1000; j++) {
							if (fs[j].getName() == name) {
								l1.setlinks(fs[j]);
							}


							if (fs[j].getName() == namePar) {
								l1.setparentFolder(fs[j]);
							}


						}
						ls[i] = l1;
						break;
					}
				}
			}
			else if (y == 2) {
				string name;
				cout << "Enter name " << endl;
				cin >> name;
				for (int i = 0; i < 1000; i++) {
					if (ls[i].getName() == name) {
						if (ls[i].getlinkType() == linksEnum::tough) {
							for (int i = 0; i < 1000; i++) {
								if (fs[i].getName() == ls[i].getlinks().getName()) {
									if (fs[i].getfolderType() != folderEnum::root) {
										fs[i] = fs[i].deleteSmth();
										ls[i] = ls[i].deleteSmht();

										break;
									}
									else
									{
										cout << "Can not delete root  " << endl;
										break;
									}

								}
							}
						}
						ls[i] = ls[i].deleteSmht();

						break;
					}
				}
			}
			else if (y == 3) {
				string name;
				cout << "Enter name " << endl;
				cin >> name;
				for (int i = 0; i < 1000; i++) {
					if (ls[i].getName() == name) {
						cout << "New name? ";
						string name1;
						cin >> name1;
						ls[i].renaming(name1);
						break;
					}
				}
			}
			else if (y == 4) {
				string name;
				cout << "Enter name " << endl;
				cin >> name;
				for (int i = 0; i < 1000; i++) {
					if (ls[i].getName() == name) {
						cout << "New time? ";
						string time;
						cin >> time;
						ls[i].change(time);
						break;
					}
				}

			}
			else if (y == 5) {
				printLink(ls);
			}

		}




		else if (x == 3) {
			if (y == 1) {
				file l1 = fl.create();
				for (int i = 0; i < 1000; i++) {
					if (fls[i].getName() == "null") {
						cout << "enter name parent folder" << endl;
						string namePar;
						cin >> namePar;
						for (int j = 0; j < 1000; j++) {
							if (fs[j].getName() == namePar) {
								l1.setparentFolder(fs[j]);
							}
						}
						fls[i] = l1;
						break;
					}
				}
			}
			else if (y == 2) {
				string name;
				cout << "Enter name " << endl;
				cin >> name;
				for (int i = 0; i < 1000; i++) {
					if (fls[i].getName() == name) {
						fls[i] = fls[i].deleteSmth();
						break;
					}
				}
			}
			else if (y == 3) {
				string name;
				cout << "Enter name " << endl;
				cin >> name;
				for (int i = 0; i < 1000; i++) {
					if (fls[i].getName() == name) {
						cout << "New name? ";
						string name1;
						cin >> name1;
						fls[i].renaming(name1);
						break;
					}
				}
			}
			else if (y == 4) {
				string name;
				cout << "Enter name " << endl;
				cin >> name;
				for (int i = 0; i < 1000; i++) {
					if (fls[i].getName() == name) {
						cout << "New time? ";
						string time;
						cin >> time;
						fls[i].change(time);
						break;
					}
				}
			}
			else if (y == 5) {
				printFile(fls);
			}

		}
		else {
			cout << "Error!";
			return 0;
		}
	}

	return 0;

}
