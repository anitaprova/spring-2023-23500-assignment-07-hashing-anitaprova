#pragma once
#include <iostream>
#include "Node.h"
#include "Person.h"

class List
{
private:
	Node *head;

public:
	List();
	~List();
	void insert(Person p);
	void insert(int loc, Person data); // 0 indexed
	Person get(int loc);
	int length();
	bool contains(Person s);
	void remove(int loc);
	Node *gethead();
	std::string toString(); // for testing purposes
};