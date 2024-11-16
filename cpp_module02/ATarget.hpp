#pragma once

#include <iostream>

#include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected:
		std::string type;

	public:
		ATarget();
		virtual ~ATarget();
		ATarget(std::string const &type);

		std::string const &getType() const;

		virtual ATarget *clone() const = 0;

		void getHitBySpell(ASpell const &al) const;
};