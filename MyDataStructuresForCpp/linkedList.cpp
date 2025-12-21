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

void LinkedList::deleteLastNode() {
	if (LinkedList::count == 0) {
		cout << endl << "There is no value for delete.";
	}
	else if (LinkedList::count == 1) {
		LinkedList::head = NULL;
		LinkedList::tail = NULL;
	}
	else {
		Node* temp = head;
		while (temp->next != LinkedList::tail) {
			temp = temp->next;
		}
		delete LinkedList::tail;
		LinkedList::tail = temp;
		LinkedList::tail->next = NULL;
		LinkedList::count--;
	}
}

void LinkedList::addFirstNode(int value) {
	Node* newnode = new Node(value);
	newnode->next = head;
	head = newnode;
	count++;
}

void LinkedList::deleteFirst() {
	if (LinkedList::count == 1) {
		delete head;
		LinkedList::head = NULL;
		LinkedList::tail = NULL;
	}
	else {
		Node* temp = LinkedList::head;
		LinkedList::head = LinkedList::head->next;
		delete temp;
		count--;
		cout << endl << "Deletion successful";
	}
}

Node* LinkedList::getNode(int index) {
	if (index == 0) {
		return LinkedList::head;
	}
	else if (index == LinkedList::count - 1) {
		return LinkedList::tail;
	}
	else if (index > 0) {
		Node* temp = LinkedList::head;
		while (index != 0) {
			temp = temp->next;
			index--;
		}
		return temp;
	}
}


