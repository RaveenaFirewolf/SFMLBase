#include "MainGame.h"

MainGame::MainGame()
{
	bgTexture.loadFromFile("Textures/Bg.png");
	
	bgSprite.setTexture(bgTexture);
	bgSprite.setPosition(sf::Vector2f(0.0f, 0.0f));
}

void MainGame::Update()
{

}

void MainGame::Draw(sf::RenderWindow* window)
{
	window->draw(bgSprite);
}