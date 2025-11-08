#pragma once
#include <iostream>
using namespace std;

template <class T>
class clsDbilLinkedList
{
protected:
	int _size = 0;

public:

	class Node
	{
	public:
		int value;
		Node* next;
		Node* prev;
	};

	Node* head = NULL;



	Node* Find(T Value)
	{
		Node* current = head;
		while (current != NULL) {

			if (current->value == Value)
				return current;

			current = current->next;
		}

		return NULL;


	}
	void InsertAtBegining(T value) {

		Node* newnode = new Node;
		newnode->value = value;
		newnode->prev = NULL;
		newnode->next = head;

		if (head != NULL) {
			head->prev = newnode;
		}

		head = newnode;
		_size++;
	}

	void InsertAfter(Node* current, T value) {

		Node* newnode = new Node;
		newnode->value = value;
		newnode->prev = current;
		newnode->next = current->next;

		if (current != NULL) {
			current->next->prev = newnode;
		}
		current->next = newnode;

		_size++;

	}

	void DeleteNode(Node*& NodeToDelete) {


		if (head == NULL || NodeToDelete == NULL) {
			return;
		}
		if (head == NodeToDelete) {
			head = NodeToDelete->next;
		}
		if (NodeToDelete->next != NULL) {
			NodeToDelete->next->prev = NodeToDelete->prev;
		}
		if (NodeToDelete->prev != NULL) {
			NodeToDelete->prev->next = NodeToDelete->next;
		}
		delete NodeToDelete;

		_size--;

	}

	void InsertAtend(T value) {

		if (head == NULL)
			return;

		Node* prev = head;
		Node* current = head;

		Node* newnode = new Node;
		newnode->value = value;
		newnode->next = NULL;

		while (current != NULL) {
			prev = current;
			current = current->next;

		}
		newnode->prev = prev;
		prev->next = newnode;

		_size++;



	}


	void DeleteLastnode() {
		if (head == NULL)
			return;

		Node* current = head;
		while (current->next != NULL) {

			current = current->next;
		}

		if (current->prev != NULL) {
			current->prev->next = NULL;
		}
		else {
			head = NULL;
		}

		delete current;

		_size--;

	}


	void DeleteFirstnode() {

		if (head == NULL)
			return;

		Node* temp = head;
		head = head->next;
		if (head != NULL) {
			head->prev = NULL;
		};
		delete temp;

		_size--;

	};

	void Size() {

		cout << "\n\n" << "Size of Linked List is : " << _size << endl;
	}

	bool IsEmpty() {
		return head == NULL;
	}

	void Clear() {
		while (head != NULL) {
			DeleteFirstnode();
		};
	}

	void  Reverse()
	{
		Node* current = head;
		Node* temp = nullptr;
		while (current != nullptr) {
			temp = current->prev;
			current->prev = current->next;
			current->next = temp;
			current = current->prev;
		}

		if (temp != nullptr) {
			head = temp->prev;
		}
	};

	Node* GetNode(int index) {

		if (index < 0 || index >= _size) {
			return nullptr;
		}
		Node* current = head;
		int count = 0;
		while (current != nullptr) {
			if (count == index) {
				return current;
			}
			current = current->next;
			count++;
		}
		return nullptr;


	};

	T GetItem(int index) {
		Node* itemNode = GetNode(index);
		if (itemNode != nullptr) {
			return itemNode->value;
		}
	}


	bool updateItem(int index, T value) {

		Node* itemNode = GetNode(index);
		if (itemNode != nullptr) {
			itemNode->value = value;
			return true;
		}

		return false;
		
	}

	void InserAfterIndex(int index, T value) {
		Node* itemNode = GetNode(index);
		if (itemNode != nullptr) {
			InsertAfter(itemNode, value);
		}
	}

	 void PrintList() {

		Node* current = head;
		while (current != NULL) {
			cout << current->value << " ";
			current = current->next;
		};
	};




};

