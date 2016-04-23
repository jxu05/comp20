#include <iostream>
#include <fstream>

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
	void expand();

	CopyNode* list;
	int capacity;
	int count;
};