#pragma once
#include "GameState.h"

const int NUM_OF_MENU = 4;

class MainMenu : public GameState 
{
public:
	MainMenu(int windowWidth, int windowHeight);

	void Update(sf::RenderWindow* window);
	void Draw(sf::RenderWindow *window);

private:
	sf::Texture texture;
	sf::Sprite sprite;

	sf::Font *font;

	sf::Text title;
	sf::Text menu[NUM_OF_MENU];

	int selected;
};