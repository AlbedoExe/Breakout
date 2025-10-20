#pragma once

#include "PowerupBase.h"

class PowerupSplitBall : public PowerupBase 
{
public:
	PowerupSplitBall(sf::RenderWindow* window, Paddle* paddle, Ball* ball);
	~PowerupSplitBall();

	std::pair<POWERUPS, float> applyEffect() override; // Method to apply the power-up effect
};
