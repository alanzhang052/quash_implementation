// Alan Zhang 2/16/20
// Quash.h

#ifndef QUASH_H
#define QUASH_H

#include <vector>

class Quash {
public:
	Quash();
	~Quash();
	int hashFunction(int element);
	void insert(int element);
	void lookup(int element);
	void deleteMin();
	void deleteElement(int element);
	void print();

private:
	struct Node {
		Node(int v, int c) {
			count = c;
			val = v;
			next = NULL;
		}

		int count;
		int val;

		Node* next;
	};

	std::vector<Node*> hashTable;
	std::vector<Node*> minHeap;
};

#endif