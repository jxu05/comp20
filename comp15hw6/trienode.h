const int SIZE = 38;	// 38 = 1(.) + 10(digit) + 1(:) + 26(alphabet)

class TrieNode {
public:
    // Initialize your data structure here.
    TrieNode();
    ~TrieNode();
    TrieNode *next[26];
    bool isString;
};