#pragma once
#include "GameState.h"

class MainGame : public GameState
{
public:
	MainGame();

	void Update();
	void Draw(sf::RenderWindow *window);

private:
	sf::Texture bgTexture;
	sf::Sprite bgSprite;
};