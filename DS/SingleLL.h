#pragma once
#include <iostream>
#include "Node.h"
class SingleLL
{	
public:
	void insertAtTail(Node* &head, int val);
	void displayList(Node* head);
	void insertAtHead(Node* &head,int val);
	void searchValue(Node* head, int val);
	void deleteValue(Node* &head, int val);
	void reverseLL(Node*& head);
	Node* reverseLLRec(Node*& head);
	Node* reverseKLL(Node*& head);
};

