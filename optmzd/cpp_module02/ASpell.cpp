#include "ASpell.hpp"

ASpell::ASpell(std::string const& name, std::string const& effects){
	this->name = name;
	this->effects = effects;
}

std::string const&	ASpell::getName() const{
	return (this->name);
}

std::string const&	ASpell::getEffects() const{
	return (this->effects);
}

void	ASpell::launch(ATarget const& rhs) const{
	rhs.getHitBySpell(*this);
}
