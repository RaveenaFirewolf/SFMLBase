#pragma once
#include "StateMachine.h"

class GameState : public StateMachine
{
public:
	GameState();

	void SetWindow(sf::RenderWindow* window);
	void SetState(StateMachine *state);

	void Update();
	void Draw();

	~GameState();

private:
	sf::RenderWindow* window;
	StateMachine* state;
};

extern GameState game;