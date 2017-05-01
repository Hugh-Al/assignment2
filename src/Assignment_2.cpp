//============================================================================
// Name        : Assignment_2.cpp
// Author      : Huy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Idea.h"
using namespace std;

int main() {
	vector<string> keyword;
	keyword.push_back("alphabet");
	keyword.push_back("typing");
	keyword.push_back("animals");


	Idea test("Huy", keyword, "The quick brown fox jumps over the lazy dog.");
	test.toString();
	if (test.findContent("jum")){
		cout << "Jump is in content" << endl;
	}
	else{
		cout << "Jump is not in content" << endl;
	}
	if (test.findKeyword("animals")){
			cout << "Animals is in keyword" << endl;
		}
		else{
			cout << "Animals is not in keyword" << endl;
		}

	return 0;
}
