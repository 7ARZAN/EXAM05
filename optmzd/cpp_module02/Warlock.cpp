#include "Warlock.hpp"

Warlock::~Warlock(){
	std::cout << this->name << ": My job here is done!\n";
}

Warlock::Warlock(std::string const& name, std::string const& title){
	this->name = name;
	this->title = title;
	std::cout << this->name << ": This looks like another boring day.\n";
}

std::string const&	Warlock::getName() const{
	return (this->name);
}

std::string const&	Warlock::getTitle() const{
	return (this->title);
}

void	Warlock::setTitle(std::string const& title){
	this->title = title;
}

void	Warlock::introduce() const{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}

void	Warlock::learnSpell(ASpell* sp){
	spl.learnSpell(sp);
}

void	Warlock::forgetSpell(std::string const& name){
	spl.forgetSpell(name);
}

void	Warlock::launchSpell(std::string const& name, ATarget const& atr){
	ASpell *spell = spl.createSpell(name);
	if (spell)
		spell->launch(atr);	
}

// #include "Dummy.hpp"
// #include "Fwoosh.hpp"
//
// int main()
// {
//   Warlock richard("Richard", "the Titled");
//
//   Dummy bob;
//   Fwoosh* fwoosh = new Fwoosh();
//
//   richard.learnSpell(fwoosh);
//
//   richard.introduce();
//   richard.launchSpell("Fwoosh", bob);
//
//   richard.forgetSpell("Fwoosh");
//   richard.launchSpell("Fwoosh", bob);
// }
//
