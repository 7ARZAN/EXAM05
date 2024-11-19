#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class	ASpell;
class	ATarget
{
	protected:
		std::string	type;
	public:
		std::string const&	getType() const;

		virtual	ATarget*	clone() const = 0;

		ATarget(std::string const& type);
		virtual	~ATarget(){};

		void	getHitBySpell(ASpell const& rhs) const;
};

#endif
