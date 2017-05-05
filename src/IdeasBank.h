/*
 * IdeasBank.h
 *
 *  Created on: 1May,2017
 *      Author: User
 */

#ifndef IDEASBANK_H_
#define IDEASBANK_H_

#include "Idea.h"
#include <iterator>
#include <fstream>

class IdeasBank {
public:
	IdeasBank();
	virtual ~IdeasBank();
	void insertData();
	void ideaFile();
	void insertIdea(Idea);
	void insertFile(string);
	void displayIdea(int);
	void deleteIdea(int);
	void displayBank();

private:
	vector<Idea> bank;
	vector<Idea> Ideasvector;

};

#endif /* IDEASBANK_H_ */
