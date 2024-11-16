#pragma once

#include <iostream>
#include <map>

#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock
{
	private:
		std::string name;
		std::string title;
		SpellBook spl;

		Warlock();
		Warlock(Warlock const &other);
		Warlock &operator=(Warlock const &other);
	public:
		~Warlock();
		Warlock(std::string const &name, std::string const &title);
		std::string const &getName() const;
		std::string const &getTitle() const;

		void setTitle(std::string const &title);
		void introduce() const;

		void learnSpell(ASpell *al);
		void forgetSpell(std::string name);
		void launchSpell(std::string name, ATarget const &al);

};