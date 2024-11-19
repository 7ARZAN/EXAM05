#include "ATarget.hpp"

ATarget::ATarget(std::string const& type){
	this->type = type;
}

std::string const&	ATarget::getType() const{
	return (this->type);
}

void	ATarget::getHitBySpell(ASpell const& rhs) const{
	std::cout << this->type << " has been " << rhs.getEffects() << "!\n";
}
