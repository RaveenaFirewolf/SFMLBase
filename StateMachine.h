#pragma once
#include <SFML/Graphics.hpp>

class StateMachine
{
public:
	virtual void Init(sf::RenderWindow *window) {}
	virtual void Update(sf::RenderWindow* window) {}
	virtual void Draw(sf::RenderWindow* window) {}
	virtual void Destroy(sf::RenderWindow* window) {}
};