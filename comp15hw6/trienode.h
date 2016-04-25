#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

const int SIZE = 90;	// ASCII：!(33) to z(122) = 84
const int EDGESIZE = 1;

struct Astring
{
	string stringv;	
};
 
class TrieNode {
public:
	TrieNode();
	~TrieNode();

    TrieNode* next[SIZE];
    bool isString;

    Astring* edgelist;

    void addEdge(string edge);
    void printEdgelist();

private:
	int edgeCap;
	int edgeCount;
	void edgeExpand();
};
