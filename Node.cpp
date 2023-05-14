#include <iostream>
#include <string>
#include "Node.h"
#include "Person.h"

Node::Node(Person p)
{
	this->p = p;
	this->next = nullptr;
}

Node::Node(std::string first, std::string last, int num)
{
	Person p = Person(first, last,num);
	this->p = p;
}

Node::Node(Person p, Node *next)
{
	this->p = p;
	this->next = next;
}

void Node::setNext(Node *next)
{
	this->next = next;
}

Person Node::getPerson()
{
	return this->p;
}

Node *Node::getNext()
{
	return this->next;
}