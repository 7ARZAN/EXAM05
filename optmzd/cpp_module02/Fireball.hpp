#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include "ASpell.hpp"

class	Fireball : public ASpell
{
	public:
		virtual ~Fireball(){};
		Fireball();

		ASpell*	clone() const;
};

#endif
