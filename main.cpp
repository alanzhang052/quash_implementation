// Alan Zhang 2/16/20
// main.cpp

#include "Quash.h"
#include <sstream>
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	if (argc != 2) {
		cout << "Format: ./quash [string]" << endl;
		exit(1);
	}

	Quash q;
	stringstream ss;
	string func;
	int num;

	ss << argv[1];

	while (ss >> func) {
		if (func == "insert") {
			ss >> num;
			q.insert(num);
		} else if (func == "lookup") {
			ss >> num;
			q.lookup(num);
		} else if (func == "delete") {
			ss >> num;
			q.deleteElement(num);
		} else if (func == "deleteMin," || func == "deleteMin") {
			q.deleteMin();
		} else if (func == "print," || func == "print") {
			q.print();
		}
	}

	return 0;
}