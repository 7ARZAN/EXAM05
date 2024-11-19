#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include "ASpell.hpp"
# include <map>

class	ASpell;
class	SpellBook
{
	private:
		std::map<std::string, ASpell *>	sp;
	public:
		SpellBook();
		~SpellBook();

		void	learnSpell(ASpell *rhs);
		void	forgetSpell(std::string const& name);
		ASpell*	createSpell(std::string const &name);
};

#endif
