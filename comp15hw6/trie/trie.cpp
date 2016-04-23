#include "trie.h"

#include <cstdlib>
#include <iostream>
using namespace std;


Trie::Trie() {
        root = new TrieNode();
}
 
// Inserts a word into the trie.
void Trie::insert(string word) {
    TrieNode *p = root;
    for(int i = 0; i < word.size(); i++){
		// 38 = 1(.) + 10(digit) + 1(:) + 26(alphabet)
    	j = index(word[i]);		
        if(p->next[j] == NULL){
            p->next[j] = new TrieNode();
        }
        p = p->next[j];
    }
    p->isString = true;
}
int Trie::index(char letter){
	int n = letter - '.';
	if (n = 0) // n is '.'
		return 0;
	else if (n > 1 and n < 12 ) // n: from '0' to '9'	
		return n - 1;
	else if (n = 12) // n is ':'
		return 1;
	else if (n )

}

/* 
    // Returns if the word is in the trie.
bool Trie::search(string word) {
        TrieNode *p = root;
        for(int i = 0; i < word.size(); i++){
            if(p == NULL) return false;
            p = p->next[word[i]-'a'];
        }
        if(p == NULL || p->isString == false) return false;
        return true;       
}
 
    // Returns if there is any word in the trie
    // that starts with the given prefix.
bool Trie::startsWith(string prefix) {
        TrieNode *p = root;
        for(int i = 0; i < prefix.size(); i++) {
            p = p->next[prefix[i]-'a'];
            if(p == NULL) return false;
        }
        return true;
}*/