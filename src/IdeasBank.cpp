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
