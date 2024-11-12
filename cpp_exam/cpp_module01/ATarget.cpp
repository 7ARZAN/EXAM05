#include "ATarget.hpp"

ATarget::ATarget()
{

}

ATarget::~ATarget()
{

}

ATarget::ATarget(std::string const &type)
{
	this->type = type;
}

std::string const &ATarget::getType() const
{
	return this->type;
}

void ATarget::getHitBySpell(ASpell const &al) const
{
	std::cout << this->type << " has been " << al.getEffects() << "!" << std::endl;
}