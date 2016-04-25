#include "copy.h"
using namespace std;

Copy::Copy() {
	list = new CopyNode[INITIAL_CAPACITY];
	capacity = INITIAL_CAPACITY;
	count = 0;
}

Copy::~Copy() {
	delete[] list;
}

void Copy::add(string str1, string str2) {
	if (count >= capacity)
		expand();

	list[count].people = str1;
	list[count].course = str2;
	count++;
}

void Copy::expand() {
	CopyNode* new_list = new CopyNode[capacity * 2];
	for (int i = 0; i < capacity; i++)
		new_list[i] = list[i];
	delete[] list;
	list = new_list;
	capacity *= 2; 
}
void Copy::print() {
	for (int i = 0; i < count; i++)
		cout << list[i].people + " " + list[i].course << endl;
}