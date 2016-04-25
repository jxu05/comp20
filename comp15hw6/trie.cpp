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
/*
void Trie::print() {
    printSorted(root, '');
}
void Trie::printSorted(TrieNode node, String s) {
    for (char ch = 0; ch < node.next.length; ch++) {
      TrieNode child = node.next[ch];
      if (child != null)
        printSorted(child, s + ch);
    }
    if (node.leaf) {
      System.out.println(s);
    }
  }*/
 
/*   // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(string prefix) {
        TrieNode *p = root;
        for(int i = 0; i < prefix.size(); i++) {
            p = p->next[prefix[i]-'a'];
            if(p == NULL) return false;
        }
        return true;
    }
*/