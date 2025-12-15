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
	friend class LinkedList;
};

class LinkedList {
private:
	Node* head;
	Node* tail;
	int count = 0;

public:
	LinkedList(int _value) {
		Node* node = new Node(_value);
		head = node;
		tail = node;
		count = 1;
	}

	void printHead() {
		cout << endl << "Head of list: " << head->value;
	}

	void printTail() {
		cout << endl << "Tail of list: " << tail->value;
	}

	void printCount() {
		cout << endl << "Count: " << count;
	}

	void append(int value) {
		Node* newnode = new Node(value);
		tail->next = newnode;
		tail = newnode;
		count++;
	}

	void printList() {
		Node* temp = head;
		while (temp != NULL){
			cout << temp->value << " ";
			temp = temp->next;
		}
	}
};


