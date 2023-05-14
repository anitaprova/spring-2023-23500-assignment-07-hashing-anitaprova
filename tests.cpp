#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Dictionary.h"

TEST_CASE("constrcutur")
{
	Dictionary *d = new Dictionary();

	// shows the empty array
	CHECK(d->toString() == "head-->nullptr\nhead-->nullptr\nhead-->nullptr\nhead-->nullptr\nhead-->nullptr\nhead-->nullptr\nhead-->nullptr\nhead-->nullptr\nhead-->nullptr\nhead-->nullptr\n");
}

TEST_CASE("deconstructor")
{
	Dictionary *d = new Dictionary();
	delete d;		 // cannot reference this anymore
	d = nullptr; // already deleted so it is good practice to point to nullptr
	CHECK(d == nullptr);
}

TEST_CASE("insert")
{
	Dictionary *d = new Dictionary();
	Person p1 = Person("amy", "landston", 1);
	Person p2 = Person("bob", "burgerss", 2); // same length as p1
	Person p3 = Person("tim", "lake", 3);
	Person p4 = Person("timmy", "turner", 4);

	d->insert(p1);
	d->insert(p2);
	d->insert(p3);

	CHECK(d->toString() == "head-->nullptr\nhead-->burgerssbob-->landstonamy-->nullptr\nhead-->nullptr\nhead-->nullptr\nhead-->nullptr\nhead-->nullptr\nhead-->nullptr\nhead-->laketim-->nullptr\nhead-->nullptr\nhead-->nullptr\n");
	CHECK(d->getKeys() == "burgerssbob landstonamy laketim ");
}

TEST_CASE("get")
{
	Dictionary *d = new Dictionary();
	Person p1 = Person("benjamin", "franklin", 1);
	Person p2 = Person("teddy", "roosevelt", 2);

	d->insert(p1);
	d->insert(p2);

	CHECK(d->get(p1) == "franklinbenjamin");
	CHECK(d->get(p2) == "rooseveltteddy");
}

TEST_CASE("getKeys")
{
	Dictionary *d = new Dictionary();
	Person p1 = Person("amy", "landston", 1);
	Person p2 = Person("bob", "burgerss", 2);
	Person p3 = Person("zeus", "thunderbolt", 3);
	Person p4 = Person("amy", "hue", 4);
	Person p5 = Person("rosa", "kim", 5);

	d->insert(p1);
	d->insert(p2);
	d->insert(p3);
	d->insert(p4);
	d->insert(p5);

	CHECK(d->getKeys() == "burgerssbob landstonamy thunderboltzeus hueamy kimrosa ");
}