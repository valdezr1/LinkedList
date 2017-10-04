#include <iostream>

#include "LinkedListHeader.h"

using namespace std;

void SingleLinkedList :: insertNode(int data){
	
	//Cases: 
		//Empty List
		//Not Empty List -- append to end
	
	Node* temp = new Node;  //create a Node pointer called temp that points to a new Node
	temp->data = data;		//set parameter data as temp node's data
	temp->right = NULL;		//set right of temp to null since it will be appended to the end of the list

	//Empty List Case
	if (head == NULL) {
		head = temp;		//since head is empty, set temp's node to head and tail
		tail = temp; 
	}
	//Non-empty Case List Case
	else {
		tail->right = temp;	//Grab tail end of list before addition of node, then set it's pointer to the new node to append
		tail = temp;		//Set tail as temp's new appended node
	}
	
	temp = NULL;			//Set temp ptr to NULL
	delete temp;			//Delete temp pointer

}

void SingleLinkedList :: deleteNode(int data){
	
	//Cases:
		//Empty List - do nothing
		//Delete Head
		//Delete Tail
		//Delete in Middle
	
	Node* temp; 

	//if list is empty, do nothing
	if(head != NULL){
		temp = head;
		//Delete Head
		if (head->data == data) { 
			head = head->right;
			temp->right = NULL;
			delete temp; 
			temp = NULL; 
		}
		//Delete Within List
		else {
			Node* follow;
			while (temp != NULL) {
				if (temp->data == data) {
					follow->right = temp->right;
					if (tail == temp) {
						tail = follow;
					}
					temp->right = NULL;
					delete temp;
					temp = NULL;
					return;
				}
				follow = temp;
				temp = temp->right;
			}
			//Data doesn't match
			cout << data << " wasn't in the list." << endl;
		}
	}

}

Node* SingleLinkedList :: getHead() {

	return head; 

}

Node* SingleLinkedList :: getTail() {
	
	return tail;

}

void SingleLinkedList:: display(){
	
	Node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->right;
	}

	cout << endl;

}
