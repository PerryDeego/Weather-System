/* Author: D. Perry */

#ifndef LIST_H
#define LIST_H
#include "Coordinates.h";
#include "Node.h";

#include <iostream>

class List {
private:
	Node *head;

public:
	~List();
	List();

	bool isEmpty();
	bool isFull();
	void insertAtFront(Coordinates);
	void insertAtEnd(Coordinates);
	void traverse();
	int countNodes();
	bool FoundInList(float, float);
	void findNode(float, float);
	
};
#endif
