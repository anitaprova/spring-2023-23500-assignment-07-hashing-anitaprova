#pragma once
#include <string>
#include "List.h"
#include "Person.h"

#define NOT_FOUND 1

class Dictionary
{
private:
	int size = 10;
	List *list[10]; // array of linked list

public:
	Dictionary();
	~Dictionary();

	void insert(Person p);
	Person get(Person p);

	std::string getKeys();
	std::string toString();
};