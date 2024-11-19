#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include "ATarget.hpp"
# include <map>

class	ATarget;
class	TargetGenerator
{
	private:
		std::map<std::string, ATarget *> atr;
	public:
		TargetGenerator(){};
		~TargetGenerator(){};

		void	learnTargetType(ATarget *);
		void	forgetTargetType(std::string const &type);
		ATarget*	createTarget(std::string const& type);
};

#endif
