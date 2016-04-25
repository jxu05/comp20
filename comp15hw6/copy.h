//#ifndef COPY_H
//#define COPY_H

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "trie.h"

using namespace std;

const int INITIAL_CAPACITY = 10; // the initial size of our list.

struct CopyNode
{
    string people;
    string course;
};

class Copy
{
public:
	Copy();
	~Copy();
	void add(string str1, string str2);
	void print();
	CopyNode* list;
	int count;

private:
	int capacity;
	void expand();
};

//#endif