#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){}

void	SpellBook::learnSpell(ASpell* rhs){
	if (rhs)
		sp[rhs->getName()] = rhs;
}

void	SpellBook::forgetSpell(std::string const& name){
	sp.erase(name);
}

ASpell*	SpellBook::createSpell(std::string const& name){
	if (sp.find(name) == sp.end())
		return NULL;
	return (sp[name]->clone());
}
