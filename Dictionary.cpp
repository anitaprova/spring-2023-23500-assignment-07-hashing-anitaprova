#include <iostream>
#include "Dictionary.h"

Dictionary::Dictionary()
{
	for (int i = 0; i < size; i++)
	{
		List *l = new List();
		list[i] = l;
	}
}

Dictionary::~Dictionary()
{
	for (int i = 0; i < size; i++)
	{
		delete list[i];
	}
}

void Dictionary::insert(Person p)
{
	int hash = (p.get_name().length()) % size; // hash function

	for (int i = 0; i < size; i++)
	{
		if (i == hash)
		{
			list[i]->insert(p);
			break;
		}
	}
}

Person Dictionary::get(Person p)
{
	for (int i = 0; i < size; i++)
	{
		List *l = list[i];
		Node *walker = l->gethead();
		while (walker != nullptr)
		{
			Person w = walker->getPerson();
			if (w.get_name() == p.get_name() && w.get_id() == w.get_id())
			{
				return w;
			}
			walker = walker->getNext();
		}
	}
	throw NOT_FOUND;
}

std::string Dictionary::getKeys() // has to be ALL first and last names
{
	std::string result = "";
	for (int i = 0; i < size; i++)
	{
		List *l = list[i];
		Node *walker = l->gethead();
		while (walker != nullptr)
		{
			result = result + walker->getPerson().get_name() + " ";
			walker = walker->getNext();
		}
	}
	return result;
}

std::string Dictionary::toString()
{
	std::string result = "";
	for (int i = 0; i < size; i++)
	{
		result = result + list[i]->toString() + "\n";
	}
	return result;
}