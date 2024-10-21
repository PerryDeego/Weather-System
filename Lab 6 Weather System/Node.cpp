/* Author: D. Perry */

#include "Coordinates.h"
#include "Node.h"
#include <iostream>

Node::~Node()
{
	// std::cout << "Deleting node..." << std::endl;
}
Node::Node()
	:data()
{
	next = NULL;
}
	
Node::Node(Coordinates obj)
	:data(obj)
{
	next = NULL;
}

Node::Node(const Node &nd)
	: data(nd.getData())
{
	next = nd.next;
}

void Node::setData(Coordinates dataObj)
{
	data = dataObj;
}

void Node::setNext(Node *nxt)
{
	next = nxt;
}

Coordinates Node::getData() const
{
	return data;
}

Node *Node::getNext() const
{
	return next;
}

void Node::display() const
{
	data.display();
}



