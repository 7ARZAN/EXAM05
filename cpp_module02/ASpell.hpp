#pragma once

#include <iostream>

#include "ATarget.hpp"

class ATarget;

class ASpell
{
	protected:
		std::string name;
		std::string effects;

	public:
	ASpell();
	virtual ~ASpell();
	ASpell(std::string const &name, std::string const &effects);

	std::string const &getName() const;
	std::string const &getEffects() const;

	virtual ASpell *clone(void) const = 0;

	void launch(ATarget const &at) const;
};