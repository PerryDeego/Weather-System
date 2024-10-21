/* Author: D. Perry */

#ifndef NODE_H
#define  NODE_H
#include "Coordinates.h"
#include <iostream>

class Node
{
private:
	Coordinates data;
	Node *next;

public:
	~Node();
	Node();
	Node(Coordinates);
	Node(const Node &nd);

	void setData(Coordinates);
	void setNext(Node *);
	Coordinates getData() const;
	Node *getNext() const;
	void display() const;	
}; 
#endif 


