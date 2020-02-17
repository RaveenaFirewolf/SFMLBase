#include "GameState.h"

GameState::GameState()
{
	state = nullptr;
	window = nullptr;
}

void GameState::SetWindow(sf::RenderWindow* window)
{
	this->window = window;
}

void GameState::SetState(StateMachine* state)
{
	// Clear the variable
	if (this->state != nullptr)
	{
		this->state->Destroy(this->window);
	}

	this->state = state;

	if (this->state != nullptr)
	{
		this->state->Init(this->window);
	}
}

void GameState::Update()
{
	if (this->state != nullptr)
	{
		this->state->Update(this->window);
	}
}

void GameState::Draw()
{
	if (this->state != nullptr)
	{
		this->state->Draw(this->window);
	}
}

GameState::~GameState()
{
	if (this->state != nullptr)
	{
		this->state->Destroy(this->window);
	}
}