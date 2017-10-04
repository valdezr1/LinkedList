#include <iostream>
#include "LinkedListHeader.h"

using namespace std;

int main() {

	SingleLinkedList singleLinkedList;

	cout << "Enter Main" << endl;
	
	Node* hello = singleLinkedList.getHead();
	
	singleLinkedList.insertNode(1);
	singleLinkedList.insertNode(2);
	singleLinkedList.insertNode(3);
	singleLinkedList.insertNode(4);
	singleLinkedList.insertNode(5);
	singleLinkedList.insertNode(6);
	singleLinkedList.insertNode(7);
	singleLinkedList.insertNode(8);
	singleLinkedList.insertNode(9);
	singleLinkedList.insertNode(10);
	singleLinkedList.insertNode(11);
	singleLinkedList.insertNode(12);

	singleLinkedList.deleteNode(10);
	singleLinkedList.deleteNode(8);
	singleLinkedList.deleteNode(1);
	singleLinkedList.deleteNode(12);


	singleLinkedList.display();


}