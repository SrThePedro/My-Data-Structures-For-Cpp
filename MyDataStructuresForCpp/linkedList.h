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
	int getValue() const{
		return value;
	}

	Node* getNext() const {
		return next;
	}

	friend class LinkedList;
};

class LinkedList {
private:
	Node* head;
	Node* tail;
	int count = 0;

public:
	LinkedList(int _value);

	void printHead();

	void printTail();

	void printCount();

	void append(int value);

	void printList();

	void deleteLastNode();

	void addFirstNode(int value);

	void deleteFirst();

	Node* getNode(int index);
	
};


