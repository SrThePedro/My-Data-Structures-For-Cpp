#include <iostream>
#include "linkedList.h"
using namespace std;

LinkedList::LinkedList(int _value) {
	Node* node = new Node(_value);
	head = node;
	tail = node;
	count = 1;
}

void LinkedList::printHead() {
	cout << endl << "Head of list: " << head->value;
}

void LinkedList::printTail() {
	cout << endl << "Tail of list: " << tail->value;
}

void LinkedList::printCount() {
	cout << endl << "Count: " << count;
}

void LinkedList::append(int value) {
	Node* newnode = new Node(value);
	tail->next = newnode;	
	tail = newnode;
	count++;
}

void LinkedList::printList() {
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->value << " ";
		temp = temp->next;
	}
}



