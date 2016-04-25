#include "trieNode.h"

using namespace std;

TrieNode::TrieNode() {
    for(int i = 0; i < SIZE; i++)
        next[i] = NULL;
    isString = false;

    edgelist = NULL;
    edgeCount = 0;
    edgeCap = EDGESIZE;

}

TrieNode::~TrieNode() {}

void TrieNode::addEdge(string edge) {
	if (edgeCount >= edgeCap)
		edgeExpand();

	edgelist[edgeCount] = edge;
	edgeCount++;

}

void TrieNode::edgeExpand() {

	string* new_edgelist = new string[edgeCap * 2];
	for (int i = 0; i < edgeCap; i++)
		new_edgelist[i] = edgelist[i];
	delete[] edgelist;
	edgelist = new_edgelist;
	edgeCap *= 2; 
}