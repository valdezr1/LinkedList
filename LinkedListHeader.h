#pragma once

struct Node {
	int data;
	Node* right;
};

class SingleLinkedList {

public:

	void insertNode( int data );
	void deleteNode( int data );

	Node* getHead();
	Node* getTail();

	void display();

private: 
	Node* head = NULL;
	Node* tail = NULL;
};
