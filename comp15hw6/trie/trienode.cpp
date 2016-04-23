#include "trieNode.h"

#include <cstdlib>
#include <iostream>
using namespace std;

TrieNode::TrieNode() {
    for(int i = 0; i < INITNUM; i++)
        next[i] = NULL;
    isString = false;
}

TrieNode::~TrieNode() {
	delete[] next;
}

/*
TrieNode::addToList(&TrieNode) {

}

TrieNode::expandList() {

}
*/
