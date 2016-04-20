#include <iostream>
#include <fstream>
#include <cassert>

using namespace std;

int main(int argc, char *argv[])
{
    ifstream input;
    string   line;

    assert(argc > 1);
	
	// read in contents of the 1st file, which specifies who took what course
    input.open(argv[1]);
    while (not getline(input, line).eof())
	    cout << line << endl;
	input.close();

	// read in contents of the 2nd file, which specifies who TAed what course
    input.open(argv[2]);
    while (not getline(input, line).eof()){
        cout << line << endl;}
    input.close();
        
    return 0;
}