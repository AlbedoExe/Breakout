#include "SFXManager.h"

SFXManager::SFXManager()
{
}

SFXManager::~SFXManager()
{

}

void SFXManager::initialize()
{
	if (_brickBreakBuffer.loadFromFile("SFX/brickBreak.wav"))
	{
		_brickBreakSound.setBuffer(_brickBreakBuffer);
	}
	else
	{

		//error
		return;
		
	}

	if (_ballBounceBuffer.loadFromFile("SFX/ballBounce.wav"))
	{
		_ballBounceSound.setBuffer(_ballBounceBuffer);
	}
	else
	{

		//error
		return;
		
	}

	if (_powerUpBuffer.loadFromFile("SFX/powerUP.wav")) 
	{
		_powerUpSound.setBuffer(_powerUpBuffer);
	}
	else
	{

		//error
		return;
		
	}

	if (_loseLifeBuffer.loadFromFile("SFX/loseLife.wav")) 
	{
		_loseLifeSound.setBuffer(_loseLifeBuffer);
	}
	else 
	{

		//error
		return;
		
	}

}

void SFXManager::playBrickBreakSound()
{
	_brickBreakSound.play();
}

void SFXManager::playBallBounceSound()
{
	_ballBounceSound.play();
}

void SFXManager::playPowerUpSound()
{
	_powerUpSound.play();
}

void SFXManager::playLoseLifeSound()
{
	_loseLifeSound.play();
}
