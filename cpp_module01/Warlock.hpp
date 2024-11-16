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
		std::map<std::string, ASpell *>	spl;
	public:
		~Warlock();
		Warlock(std::string const &name, std::string const &title);
		std::string const	&getName() const;
		std::string const	&getTitle() const;
		void	setTitle(const std::string &title);
		void	introduce() const;

		void	learnSpell(ASpell *rhs);
		void	forgetSpell(std::string const& name);
		void	launchSpell(std::string const& name, ATarget const &rhs);
};

#endif
