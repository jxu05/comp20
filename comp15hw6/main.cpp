#include <iostream>
#include <fstream>
#include <cassert>

//#include "copy.h"

using namespace std;

int main(int argc, char *argv[]) {
    ifstream input;
    string   line;
    //Copy file[2];
    assert(argc > 1);

    for (int fileNum = 0; fileNum < 2; fileNum++) {
        // Read in contents from files
        input.open(argv[fileNum+1]);
        while(not getline(input, line).eof()) {
            size_t pos = line.find(":");
            string str1 = line.substr(0, pos);
            string str2 = line.substr(pos+1);
            cout << str1 << endl;
            cout << str2 << endl;

            //file[fileNum].add(str1, str2);
        } 
        input.close();      
    }

    return 0;
}