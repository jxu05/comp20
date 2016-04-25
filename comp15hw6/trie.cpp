#include "trie.h"
using namespace std;

Trie::Trie() {
    root = new TrieNode();
}

Trie::~Trie() {

}

// Inserts a word into the trie.
void Trie::insert(string word) {
    TrieNode *p = root;
    int size = word.size();
    for(int i = 0; i < size; i++){
        if(p->next[word[i]-'!'] == NULL){
            p->next[word[i]-'!'] = new TrieNode();
        }
        p = p->next[word[i]-'!'];
        }
    p->isString = true;
}
 
// Returns if the word is in the trie.
TrieNode * Trie::searchPos(string word) {
    TrieNode *p = root;
    int size = word.size();
    for(int i = 0; i < size; i++){
        if(p == NULL) 
            return NULL;
        p = p->next[word[i]-'!'];
    }
    if(p == NULL || p->isString == false) 
        return NULL;
    else
        return p;        
}

bool Trie::search(string word) {
    TrieNode *p = root;
    int size = word.size();
    for(int i = 0; i < size; i++){
        if(p == NULL) 
            return false;
        p = p->next[word[i]-'!'];
    }
    if(p == NULL || p->isString == false) 
        return false;
    else
        return true;        
}

bool Trie::insertEdge(string word, string str) {
    // find the leaf
    TrieNode *p = root;
    int size = word.size();
    for(int i = 0; i < size; i++){
        if(p == NULL) 
            return false;
        p = p->next[word[i]-'!'];
    }
    if(p == NULL || p->isString == false) { 
        return false;}
    else {
        p->addEdge(str);
        return true;    
    }    
}

void Trie::print() {
    printSorted(root, "");
}

void Trie::printSorted(TrieNode* p, string s) {
    if (p->isString)
        cout << s << endl;

    for (int i = 0; i < SIZE; i ++) {
        if (p->next[i] != NULL) {
            char ch = '!' + i;
            printSorted(p->next[i], s+ch);
        }
    }
}

bool Trie::printEdge(string word) {
    TrieNode *p = root;
    int size = word.size();
    for(int i = 0; i < size; i++){
        if(p == NULL) 
            return false;
        p = p->next[word[i]-'!'];
    }
    if(p == NULL || p->isString == false) 
        return false;
    else {
        p->printEdgelist();
        return true;
    }
}