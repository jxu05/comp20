#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

const int SIZE = 90;	// ASCII：!(33) to z(122) = 84
const int EDGESIZE = 1;
 
class TrieNode {
public:
	TrieNode();
	~TrieNode();

    TrieNode* next[SIZE];
    bool isString;

    string* edgelist;
    int edgeCount;
    void addEdge(string edge);

private:
	int edgeCap;
	void EdgeExpand();
};
