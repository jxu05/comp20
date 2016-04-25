
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cassert>

#include "copy.h"

using namespace std;

void creatTrie(Copy*, Copy*, Trie*, Trie*, Trie*);
void findpaths(string&, string&, Trie*, Trie*);
void findshortestpath(string&, string&, Trie*, Trie*);

int main(int argc, char *argv[]) {
    ifstream input;
    string line, str1, str2, callstr, call1, call2, student_a, student_b;
    Copy file[2];
    assert(argc > 1);

    // Read in contents from files
    for (int fileNum = 0; fileNum < 2; fileNum++) {
        input.open(argv[fileNum+1]);
        while(not getline(input, line).eof()) {
            size_t pos = line.find(":");
            str1 = line.substr(0, pos);
            str2 = line.substr(pos+1);
            file[fileNum].add(str1, str2);
        } 
        input.close();     
    }
    // Creat the Trie
    Trie ls, lc, lt;
    creatTrie(&file[0], &file[1], &ls, &lc, &lt);
    getline (cin, callstr);

    size_t pos1 = callstr.find(" ");
    call1 = callstr.substr(0, pos1);
    call2 = callstr.substr(pos1+1);

    if (call1 == "ls")
        ls.print();
    if (call1 == "lc")
        lc.print();
    if (call1 == "taed") {
        if (!lt.search(call2))
            cout << "Student not found" << endl;
        else
            lt.printEdge(call2);
        
    }
    if (call1 == "roster") {
        if (!lc.search(call2))
            cout << "Course not found" << endl;
        else
            lc.printEdge(call2);
        
    }
    if (call1 == "paths") {
        size_t pos2 = call2.find(" ");
        student_a = call2.substr(0, pos2);
        student_b = call2.substr(pos2+1);
        if (!ls.search(student_a) or !ls.search(student_b))
            cout << "Student not found" << endl;
        else
            findpaths(student_a, student_b, &lc, &lt);

    }
    if (call1 == "shortestpath") {
        size_t pos2 = call2.find(" ");
        student_a = call2.substr(0, pos2);
        student_b = call2.substr(pos2+1);
        if (!ls.search(student_a) or !ls.search(student_b))
            cout << "Student not found" << endl;
        else        
            findshortestpath(student_a, student_b, &lc, &lt);
    }

    return 0;
}

void creatTrie(Copy* student, Copy* ta, Trie* ps, Trie* pc, Trie* pt) {
    // creat ta trie
    for (int i = 0; i < ta->count; i++) {
        ps->insert(ta->list[i].people);
        pc->insert(ta->list[i].course);
    }
    string studentNM, courseNM, taNM, course_NM;
    for (int i = 0; i < student->count; i++) {
        studentNM = student->list[i].people;
        courseNM = student->list[i].course;
        ps->insert(studentNM);
        pc->insert(courseNM);
        // add a student to a course
        pc->insertEdge(courseNM, studentNM);
    }

    for (int i = 0; i < ta->count; i++) {
        taNM = ta->list[i].people;
        course_NM = ta->list[i].course;
        // add a counse to the ta
        pt->insert(taNM);
        pt->insertEdge(taNM, course_NM);
    }
}

void findpaths(string &student_a, string &student_b, Trie* pc, Trie* pt){
    cout << student_a << endl;
    cout << student_b << endl;
    

}

void findshortestpath(string &student_a, string &student_b, Trie* pc, Trie* pt){

}