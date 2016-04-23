const int INITNUM = 38;	// 38 = 1(.) + 10(digit) + 1(:) + 26(alphabet)

class TrieNode {

public:
    // Initialize your data structure here.
    TrieNode();
    ~TrieNode();
    bool isString;    
    TrieNode *next[INITNUM];

 /*   TrieNode *list;
    int count;
    int capacity;
    void addToList(&TrieNode);
    void expandList();
  */
};