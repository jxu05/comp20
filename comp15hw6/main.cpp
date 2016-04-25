
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cassert>

#include "copy.h"
//#include "trie.h"

using namespace std;

void creatTrie(Copy*, Copy*);

int main(int argc, char *argv[]) {
    ifstream input;
    string   line;
    Copy file[2];
    assert(argc > 1);

    // Read in contents from files
    for (int fileNum = 0; fileNum < 2; fileNum++) {
        input.open(argv[fileNum+1]);
        while(not getline(input, line).eof()) {
            size_t pos = line.find(":");
            string str1 = line.substr(0, pos);
            string str2 = line.substr(pos+1);
            file[fileNum].add(str1, str2);
        } 
        input.close();     
    }
    // Creat the Trie
    creatTrie(&file[0], &file[1]);

    return 0;
}

void creatTrie(Copy* student, Copy* ta) {
    Trie ls, lc;
    for (int i = 0; i < student->count; i++) {
        ls.insert(student->list[i].people);
        lc.insert(student->list[i].course);
    }
    for (int i = 0; i < ta->count; i++) {
        ls.insert(ta->list[i].people);
        lc.insert(ta->list[i].course);
    }
    ls.print();
    lc.print();
}