#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {}
TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget* al)
{
	if (al)
		spl[al->getType()] = al;
}

void TargetGenerator::forgetTargetType(std::string const &s)
{
	spl.erase(s);
}

ATarget* TargetGenerator::createTarget(std::string const &s)
{
	if (spl.find(s) == spl.end())
		return NULL;
	return spl[s]->clone();
}
