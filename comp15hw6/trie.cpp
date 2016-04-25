#include "trie.h"


Trie::Trie() {
    root = new TrieNode();
}
 
// Inserts a word into the trie.
void Trie::insert(string word) {
    TrieNode *p = root;
    for(int i = 0; i < word.size(); i++){
        if(p->next[word[i]-'!'] == NULL){
            p->next[word[i]-'!'] = new TrieNode();
        }
        p = p->next[word[i]-'!'];
        }
    p->isString = true;
}
 
// Returns if the word is in the trie.
bool Trie::search(string word) {
    TrieNode *p = root;
    for(int i = 0; i < word.size(); i++){
        if(p == NULL) 
            return false;
        p = p->next[word[i]-'!'];
    }
    if(p == NULL || p->isString == false) 
        return false;
    else
        return true;        
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