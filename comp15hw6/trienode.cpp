#include "trieNode.h"

#include <cstdlib>
#include <iostream>
using namespace std;

class TrieNode {
public:
    // Initialize your data structure here.
    TrieNode() {
        for(int i = 0; i < 26; i++)
            next[i] = NULL;
        isString = false;
    }
    TrieNode *next[26];
    bool isString;
};
