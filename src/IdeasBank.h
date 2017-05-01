/*
 * IdeasBank.h
 *
 *  Created on: 1May,2017
 *      Author: User
 */

#ifndef IDEASBANK_H_
#define IDEASBANK_H_

#include "Idea.h"

class IdeasBank {
public:
	IdeasBank();
	virtual ~IdeasBank();
	void insertData();
	void insertIdea(Idea);
	void displayIdea(int);
	void deleteIdea(int);
	void displayBank();

private:
	vector<Idea> bank;

};

#endif /* IDEASBANK_H_ */
