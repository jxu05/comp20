//#include "trienode.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

#include "trienode.h"

using namespace std;

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

    bool insertEdge(string word, string str);

    bool printEdge(string word);  
 
private:
    TrieNode* root;
};