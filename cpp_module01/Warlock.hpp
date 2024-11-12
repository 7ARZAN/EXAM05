#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include "ASpell.hpp"
# include <iostream>
# include <map>

class	Warlock
{
	private:
		std::string	title;
		std::string	name;
	public:
		~Warlock();
		Warlock(std::string const &name, std::string const &title);
		std::string const	&getName() const;
		std::string const	&getTitle() const;
		void	setTitle(const std::string &title);
		void	introduce() const;

		void	learnSpell(ASpell *rhs);
		void	forgetSpell(std::string name);
		void	launchSpell(std::string name, ATarget const &rhs);
};

#endif
