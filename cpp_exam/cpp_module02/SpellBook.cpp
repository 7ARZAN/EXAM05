#include "SpellBook.hpp"

SpellBook::SpellBook() {}
SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell* al)
{
	if (al)
		spl[al->getName()] = al;
}

void SpellBook::forgetSpell(std::string const &s)
{
	spl.erase(s);
}

ASpell* SpellBook::createSpell(std::string const &s)
{
	if (spl.find(s) == spl.end())
		return NULL;
	return spl[s]->clone();
}
