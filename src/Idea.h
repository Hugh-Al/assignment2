/*
 * Idea.h
 *
 *  Created on: 1May,2017
 *      Author: User
 */

#ifndef IDEA_H_
#define IDEA_H_

#include <iostream>
#include <vector>
using namespace std;

class Idea {
public:
	Idea(string, vector<string>, string);
	virtual ~Idea();
	int getID();
	void toString();
private:
	static int id;
	string proposer;
	string content;
	vector<string> keywords;


};



#endif /* IDEA_H_ */
