#pragma once

#include "ASpell.hpp"

#include <map>

class ASpell;

class SpellBook
{
	private:
		std::map <std::string, ASpell *> spl;

	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell*);
		void forgetSpell(std::string const &);
		ASpell* createSpell(std::string const &);
};