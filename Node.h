#pragma once
#include "Person.h"

class Node
{
private:
	Person p;
	Node *next;

public:
	Node();
	Node(Person p);
	Node(std::string first, std::string last, int num);
	Node(Person p, Node *next);
	
	void setNext(Node *next);

	Person getPerson();
	Node *getNext();
};