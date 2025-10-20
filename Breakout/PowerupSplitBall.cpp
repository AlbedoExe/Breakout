#include "PowerupSplitBall.h"

PowerupSplitBall::PowerupSplitBall(sf::RenderWindow* window, Paddle* paddle, Ball* ball)
	: PowerupBase(window, paddle, ball)
{
	_sprite.setFillColor(paddleEffectsColour);
}

PowerupSplitBall::~PowerupSplitBall()
{
}

std::pair<POWERUPS, float> PowerupSplitBall::applyEffect()
{
	_ball->splitBall(10.f);
	return{splitBall,10.0f};
}
