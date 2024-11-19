#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <map>
# include <iostream>
# include "ASpell.hpp"
# include "SpellBook.hpp"

class	Warlock
{
	private:
		SpellBook	spl;
		std::string	name;
		std::string	title;
	public:
		~Warlock();
		Warlock(std::string const& name, std::string const& title);

		std::string const&	getName() const;
		std::string const&	getTitle() const;

		void	setTitle(std::string const& title);
		void	introduce() const;

		void	learnSpell(ASpell* sp);
		void	forgetSpell(std::string const& name);
		void	launchSpell(std::string const& name, ATarget const& atr);
};

#endif
