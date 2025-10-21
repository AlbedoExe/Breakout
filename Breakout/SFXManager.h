#pragma once
#include <SFML/Audio.hpp>

class SFXManager
{
public:
	SFXManager();
	~SFXManager();

	void initialize();
	void playBrickBreakSound();
	void playBallBounceSound();
	void playPowerUpSound();
	void playLoseLifeSound();

	sf::SoundBuffer _brickBreakBuffer;
	sf::SoundBuffer _ballBounceBuffer;
	sf::SoundBuffer _powerUpBuffer;
	sf::SoundBuffer _loseLifeBuffer;

	
	sf::Sound _brickBreakSound;
	sf::Sound _ballBounceSound;
	sf::Sound _powerUpSound;
	sf::Sound _loseLifeSound;
};
