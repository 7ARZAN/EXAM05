#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

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
};

#endif
