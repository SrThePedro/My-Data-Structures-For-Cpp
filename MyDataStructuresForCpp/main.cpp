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





	return 0;
}