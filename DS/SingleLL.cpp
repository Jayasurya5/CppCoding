#include "SingleLL.h"

void SingleLL::insertAtTail(Node* &head, int val) {
	Node* n = new Node(val);

	if (head == NULL) {
		head = n;
		return;
	}
	Node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = n;
}

void SingleLL::insertAtHead(Node* &head,int val) {
	Node* node = new Node(val);
	node->next = head;
	head = node;
	
}
void SingleLL::displayList(Node* head) {
	Node* temp = head;
	while (temp != NULL) {
		std::cout << temp->data << " ";
		temp = temp->next;
	}
}

void SingleLL::searchValue(Node* head, int val) {
	Node* temp = head;
	while (temp != NULL) {
		if (temp->data == val) {
			std::cout << "value is present";
			return;
		}
		temp = temp->next;
	}
	std::cout << " value is not present";
}

void SingleLL::deleteValue(Node* &head, int val) {
	Node* temp = head;
	
	while (temp != NULL) {
		if (temp == head && temp->data == val) {
			head = temp->next;
			return;
		}
		else if (temp->next != NULL && temp->next->data == val) {
			Node* toDelete = temp->next;
			temp->next = temp->next->next;
			return; 
		}
		temp = temp->next;
	}
	std::cout << "value is not present ";
}

void SingleLL::reverseLL(Node*& head) {
	Node* prevNode = NULL;
	Node* currNode = head;
	Node* nextNode;

	while (currNode != NULL) {
		nextNode = currNode->next;
		currNode->next = prevNode;

		prevNode = currNode;
		currNode = nextNode;
	}

	head = prevNode;
}

Node* SingleLL::reverseLLRec(Node* &head) {
	if (head == NULL || head->next == NULL) {
		return head; //last head is returned here and next code will not occur
	}
	Node* newHead = reverseLLRec(head->next);
	head->next->next = head;//this starts with second last element from back
	head->next = NULL;

	return newHead;
}

