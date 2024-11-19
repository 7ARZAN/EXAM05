#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include "ATarget.hpp"

class	BrickWall : public ATarget
{
	public:
		virtual ~BrickWall(){};
		BrickWall();

		ATarget*	clone() const;
};

#endif
