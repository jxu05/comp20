
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cassert>

#include "copy.h"
//#include "trie.h"

using namespace std;

void creatTrie(Copy*, Copy*, Trie*, Trie*, Trie*);
void creatEdge(Copy*, Copy*, Trie*, Trie*, Trie*);

int main(int argc, char *argv[]) {
    ifstream input;
    string   line, call;
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
    Trie ls, lc, lt;
    creatTrie(&file[0], &file[1], &ls, &lc, &lt);
    creatEdge(&file[0], &file[1], &ls, &lc, &lt);
    cin >> call;
    if (call == "ls")
        ls.print();
    if (call == "lc")
        lc.print();


    return 0;
}

void creatTrie(Copy* student, Copy* ta, Trie* ps, Trie* pc, Trie* pt) {
    // creat ta trie
    for (int i = 0; i < ta->count; i++) {
        ps->insert(ta->list[i].people);
        pc->insert(ta->list[i].course);
    }

    for (int i = 0; i < student->count; i++) {
        ps->insert(student->list[i].people);
        pc->insert(student->list[i].course);
        // add a student to a course
    }


    for (int i = 0; i < ta->count; i++) {
        pt->insert(ta->list[i].people);
        // add a counse to the ta
    }
}