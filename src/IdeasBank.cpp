/*
 * IdeasBank.cpp
 *
 *  Created on: 1May,2017
 *      Author: User
 */

#include "IdeasBank.h"

IdeasBank::IdeasBank() {
	// TODO Auto-generated constructor stub

}

IdeasBank::~IdeasBank() {
	// TODO Auto-generated destructor stub
}

void IdeasBank::insertData() {
	string name;
	string temp;
	string lineInput;
	vector<string> keywords;
	cout << "Please enter Proposers name\n>";
	getline(cin, name);
	cout
			<< "Please insert keywords. Each new keyword must be followed by entering the RETURN key.\nTo quit, please enter '\\'"
			<< endl;
	while (true) {
		getline(cin, temp);
		if(temp.compare("\\") == 0){
			break;
		}
		keywords.push_back(temp);
	}
	cout << "Please enter content\n>";
	getline(cin, lineInput);
	Idea newIdea(name, keywords, lineInput);
	bank.push_back(newIdea);

}

void IdeasBank::insertIdea(Idea newIdea) {
	bank.push_back(newIdea);
}

void IdeasBank::displayIdea(int id) {
	for (vector<Idea>::iterator i = bank.begin(); i != bank.end(); ++i) {
		if (i->getID() == id) {
			i->toString();
		}
	}
}
void IdeasBank::deleteIdea(int id) {
	for (vector<Idea>::iterator i = bank.begin(); i != bank.end(); ++i) {
		if (i->getID() == id) {
			bank.erase(i);
		}
	}
}

void IdeasBank::displayBank() {
	for (vector<Idea>::iterator i = bank.begin(); i != bank.end(); ++i) {
		i->toString();
	}
}
