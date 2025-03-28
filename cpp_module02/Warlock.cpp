#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
{
	this->title = title;
	this->name = name;
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName() const
{
	return this->name;
}

std::string const &Warlock::getTitle() const
{
	return this->title;
}

void Warlock::setTitle(std::string const &title)
{
	this->title = title;
}

void Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *al)
{
	spl.learnSpell(al);
}
void Warlock::forgetSpell(std::string name)
{
	spl.forgetSpell(name);
}
void Warlock::launchSpell(std::string name, ATarget const &al)
{
	ASpell *spell = spl.createSpell(name);
	if (spell)
		spell->launch(al);
}
