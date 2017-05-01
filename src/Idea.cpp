/*
 * Idea.cpp
 *
 *  Created on: 1May,2017
 *      Author: User
 */

#include "Idea.h"

Idea::Idea(string proposer, vector<string> keywords, string content) {
	id++;
	this->proposer = proposer;
	this->keywords = keywords;
	this->content = content;
}

Idea::~Idea() {
	// TODO Auto-generated destructor stub
}

int Idea::id = 0;

int Idea::getID() {
	return id;
}

string Idea::getContent() {
	return content;
}

string Idea::getProposer() {
	return proposer;
}

vector<string> Idea::getKeywords() {
	return keywords;
}
void Idea::toString() {
	cout << "This object has id: " << id << ".\nProposer: " << proposer;
	cout << "Content is: " << content << endl;
	for (vector<string>::const_iterator i = keywords.begin();
			i != keywords.end(); ++i) {
		std::cout << *i << ' ';
	}
	cout << endl;
}

bool Idea::findContent(string word) {
	return content.find(word);
}

bool Idea::findKeyword(string word) {
	for (vector<string>::const_iterator i = keywords.begin();
			i != keywords.end(); ++i) {
		if (word == *i) {
			return true;
		}
	}
	return false;
}
