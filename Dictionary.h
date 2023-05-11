#pragma once
#include <string>
#include "List.h"
#include "Person.h"

class Dictionary
{
	Dictionary();
	~Dictionary();
	void insert();
	Person get();
	std::string getKeys();
	List l[5]; // array of linked list
};