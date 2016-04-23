#include "trienode.h"

const int INITNUM = 38;	// 38 = 26(alphabet) + 1(.) + 1(:) + 10(digit)
 
class Trie {
public:
    Trie();
 
    // Inserts a word into the trie.
    void insert(string word);

    // find the index of the next array for the character
    int index(char letter);
 
 /*   // Returns if the word is in the trie.
    bool search(string word);
 
    // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(string prefix);
*/
 
private:
    TrieNode* root;
};