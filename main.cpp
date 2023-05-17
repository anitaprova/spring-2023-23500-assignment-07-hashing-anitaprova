#include <iostream>
#include "Person.h"
#include "Dictionary.h"
#include "Node.h"
#include "List.h"

int main()
{
	Dictionary *d = new Dictionary();
	Person p1 = Person("amy", "landston", 1);
	Person p2 = Person("bob", "burgerss", 2);
	Person p3 = Person("candance", "nutter", 3);
	d->insert(p1);
	d->insert(p2);
	d->insert(p3);
	std::cout << d->getKeys() << "\n";
	std::cout << d->toString() << "\n";

	Person p4 = Person("george", "foundler", 4);
	try
	{
		d->get(p4);
	}
	catch (int e)
	{
		std::cout << "error code: " << e << "\n";
	}

	return 0;
}