#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include "ASpell.hpp"

class	Polymorph : public ASpell
{
	public:
		virtual ~Polymorph(){};
		Polymorph();

		ASpell*	clone() const;
};

#endif
