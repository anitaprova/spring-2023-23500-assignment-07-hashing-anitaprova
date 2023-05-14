#pragma once
#include <string>
#include "List.h"
#include "Person.h"

class Dictionary
{
private:
	int size = 10;
	List *list[10]; // array of linked list

public:
	Dictionary();
	~Dictionary();

	void insert(Person p);
	std::string get(Person p);

	std::string getKeys();
	std::string toString();
};