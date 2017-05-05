/*
 * IdeasBank.cpp
 *
 *  Created on: 1May,2017
 *      Author: User
 */

#include "IdeasBank.h"
#include <sstream>

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
		if (temp.compare("\\") == 0) {
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

void IdeasBank::ideaFile() {
	string word;
	string p;
	string k;
	string c;
	string clear, clear2;
	string line;
	vector<string> keywords;
	ifstream wordFile("lol.txt");
	while (!wordFile.eof()) {
		getline(wordFile, p, ':');
		getline(wordFile, k, ':');
		getline(wordFile, c, ':');
		getline(wordFile, clear);
		getline(wordFile, clear2);
		istringstream keyword(k);
		while (keyword >> word) // streams over content
		{
			keywords.push_back(word);
		}
		Idea newIdea(p, keywords, c); // calls the copy constructor
		Ideasvector.push_back(newIdea); // incputs into vector
	}

	Ideasvector[0].toString();
	Ideasvector[1].toString();
	Ideasvector[2].toString();
}

void IdeasBank::insertFile(string file) {
	ifstream dataInput("input.txt");
	string word;

	string propName;
	string stringKeyword;
//	vector<string> tempKeyword;
	string tempContent;
	string clearBuffer;

	while (!dataInput.eof()) {
		getline(dataInput, propName, ';');
		getline(dataInput, stringKeyword, ';');
		getline(dataInput, tempContent, ';');
		getline(dataInput, clearBuffer);

		stringstream keywordStream(stringKeyword);
		istream_iterator<string> begin(keywordStream);
		istream_iterator<string> end;
		vector<string> tempKeyword(begin, end);

		Idea tempIdea(propName, tempKeyword, tempContent);
		bank.push_back(tempIdea);
	}

	bank[0].toString();
	bank[1].toString();
	bank[2].toString();
	bank[3].toString();
}

void IdeasBank::displayIdea(int id) {
	for (vector<Idea>::iterator i = bank.begin(); i != bank.end(); ++i) {
		if (i->getID() == id) {
			i->toString();
		}
	}
}

//Do binary search here // make into separate function??
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
