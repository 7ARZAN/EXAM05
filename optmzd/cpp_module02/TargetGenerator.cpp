#include "TargetGenerator.hpp"

void	TargetGenerator::learnTargetType(ATarget* rhs){
	if (rhs)
		atr[rhs->getType()] = rhs;
}

void	TargetGenerator::forgetTargetType(std::string const& type){
	atr.erase(type);
}

ATarget*	TargetGenerator::createTarget(std::string const& type){
	if (atr.find(type) == atr.end())
		return NULL;
	return (atr[type]->clone());
}
