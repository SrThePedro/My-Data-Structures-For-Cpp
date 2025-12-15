#pragma once
#include <iostream>
using namespace std;

class Node {
private:
	int value;
	Node* next;

public:
	Node(int _value) {
		value = _value;
		next = NULL;
	}
};


