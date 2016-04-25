//#include "trienode.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

const int SIZE = 90;	// ASCII：!(33) to z(122) = 84
 
struct TrieNode {
public:
    // Initialize your data structure here.
    TrieNode() {
        for(int i = 0; i < SIZE; i++)
            next[i] = NULL;
        isString = false;
    }
    TrieNode *next[SIZE];
    bool isString;
};


class Trie {
public:
    Trie();
    //~Trie();
 
    // Inserts a word into the trie.
    void insert(string word);

    // Returns if the word is in the trie.
    bool search(string word);
    void print();
    void printSorted(TrieNode* p, string s); 
 
private:
    TrieNode* root;
};