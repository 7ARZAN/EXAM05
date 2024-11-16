#pragma once

#include "ATarget.hpp"

#include <map>

class ATarget;

class TargetGenerator
{
	private:
		std::map <std::string, ATarget *> spl;

	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget*);
		void forgetTargetType(std::string const &);
		ATarget* createTarget(std::string const &);
};