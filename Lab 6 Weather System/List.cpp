/* Author: D. Perry */

#include "Coordinates.h";
#include "Node.h";
#include "List.h";

#include <iostream>
using namespace std;

List::~List()
{
	//std::cout << "Deleting list..." << std::endl;
}

List::List()
{
	head = NULL;
}

bool List::isEmpty()
{
	if (head == NULL)
		return true;
	else
		return false;
}

bool List::isFull()
{
	Node *temp = new Node();

	if (temp != NULL)
	{
		delete temp;
		return false;
	} //end if

	return false;
}

void List::insertAtFront(Coordinates data)
{
	if (!isFull())
	{
		Node *temp = new Node(data);

		if (isEmpty())
		{
			head = temp;
		}
		else
		{
			temp->setNext(head);
			head = temp;
		} //end else
	}
	else
	{
		cout << "List is already full!" << endl;
	}
}



void List::insertAtEnd(Coordinates data)
{
	if (!isFull())
	{
		Node *node = new Node(data);

		if (isEmpty())
		{
			head = node;
		}
		else
		{
			Node *temp = head;

			while (temp->getNext() != NULL)
			{
				temp = temp->getNext();
			}

			temp->setNext(node);
			
		} //end else
	}
	else
	{
		cout << "List is already full!" << endl;
	}
}

void List::traverse()
{
	if (!isEmpty())
	{
		Node *temp = head;
		while (temp != NULL)
		{
			temp->display();
			temp = temp->getNext();
		} //end while
	}
	else
	{
		cout << "List is empty no nodes to traverse!" << endl;
	} //end else
}


int List::countNodes()
{
	int count = 0;

	if (isEmpty())
	{
		return count;
	}
	else
	{
		Node *temp = head;

		while (temp != NULL)
		{
			++count;

			temp = temp->getNext();
		} //end while

		return count;
	} //end else
}


bool List::FoundInList(float x, float y)
{
	if (isEmpty())
	{
		return false;
	}
	else
	{
		Node *temp = head;

		while (temp != NULL)
		{

			if (temp->getData().getX() == x && temp->getData().getY() == y)
			{
				return true;
			} //end if

			temp = temp->getNext();

		} //end while

		return false; //case where coordinates are not found

	} //end else
}

void List::findNode(float x, float y)
{
	if (isEmpty())
	{
		cout << "--- LIST is empty! ---" << endl;
	}
	else if (FoundInList(x, y))
	{
		cout << "Node with coordinates : (" << x <<"," << y << ") found in list.";
	}
	else
	{
		cout << "Node with coordinates : (" << x << "," << y << ") not found in list.";
	} //end else
}
