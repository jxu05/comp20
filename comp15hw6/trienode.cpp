#include "trieNode.h"

using namespace std;

TrieNode::TrieNode() {
    for(int i = 0; i < SIZE; i++)
        next[i] = NULL;
    isString = false;

    //edgelist = NULL;
    edgelist = new Astring[1];
    edgeCount = 0;
    edgeCap = EDGESIZE;

}

TrieNode::~TrieNode() {
	
}

void TrieNode::addEdge(string edge) {
	if (edgeCount >= edgeCap) {
		edgeExpand();
	}
	edgelist[edgeCount].stringv = edge;
	edgeCount++;
}

void TrieNode::edgeExpand() {

	Astring* new_edgelist = new Astring[edgeCap * 2];
	for (int i = 0; i < edgeCap; i++)
		new_edgelist[i] = edgelist[i];
	delete[] edgelist;
	edgelist = new_edgelist;
	edgeCap *= 2; 
}

void TrieNode::printEdgelist() {
	for (int i = 0; i < edgeCount; i++) {
		cout << edgelist[i].stringv << endl;
	}
}