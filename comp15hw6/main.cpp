#include <iostream>
#include <fstream>
#include <cassert>


using namespace std;
void copy(string, int, CopyNode);
void callFunction(string);

//#include "ls.h"
struct CopyNode
{
    string people;
    string course;
};

int main(int argc, char *argv[]) {
    ifstream input;
    string   line;
    CopyNode* root[2];
    assert(argc > 1);

    for (int fileNum = 1; fileNum < 3; fileNum++) {
        input.open(argv[fileNum]);// Count the number of lines    
        int lineNum = 0;
        while (not getline(input, line).eof())
            lineNum++;
        input.close();

        CopyNode* list = new CopyNode [lineNum];  
        root[fileNum - 1] = list;

        input.open(argv[fileNum]);// Read in contents from files
        for (int index = 0; not getline(input, line).eof(); index++) {
            copy(line, lineNum, list[index]);          
        }
        input.close();
    }

    /*
    string call;
    cin >> call;
    callFunction(call);
    */
    return 0;
}

void copy(string line, int lineNum,  CopyNode list[index]) {
    size_t pos = line.find(":");
    string str1 = line.substr(0, pos);
    string str2 = line.substr(pos+1);
    cout << str1 << endl;
    cout << str2 << endl;
    cout << index << endl;
  
}

void callFunction(string call) {

}