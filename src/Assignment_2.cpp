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
	keyword.push_back("computer");
	keyword.push_back("algorithm");


	Idea test("Huy", keyword, "blahblah");
	test.toString();

	return 0;
}
