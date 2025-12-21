#include <iostream>
#include "linkedList.h"
using namespace std;


int main() {
	LinkedList list1(10);

	list1.append(9);
	list1.append(8);
	list1.append(7);
	list1.append(6);
	list1.append(5);

	list1.printHead();
	list1.printTail();
	list1.printCount();
	cout << endl << endl;
	list1.printList();

	list1.deleteLastNode();
	cout << endl << endl;
	list1.printList();
	list1.printCount();

	list1.addFirstNode(-1);
	cout << endl << endl;
	list1.printList();
	list1.printCount();

	list1.deleteFirst();
	cout << endl << endl;
	list1.printList();
	list1.printCount();

	cout << endl << list1.getNode(2)->getValue();
	cout << endl << list1.getNode(0)->getValue();
	









	return 0;
}