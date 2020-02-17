#include <iostream>
#include "MainMenu.h"
#include "MainGame.h"

MainMenu::MainMenu(int windowWidth, int windowHeight)
{
	font = new sf::Font();
	if (font->loadFromFile("Font/cour.ttf"))
	{
		// Handle errors
	}

	title.setFont(*font);
	title.setString("Game title");
	title.setFillColor(sf::Color(0, 0, 255));
	title.setCharacterSize(50);
	title.setPosition(sf::Vector2f(windowWidth / 2 - 100, 0.0f));

	menu[0].setFont(*font);
	menu[0].setString("Play");
	//menu[0].setFillColor(sf::Color(255, 0, 0));
	menu[0].setCharacterSize(30);
	menu[0].setPosition(sf::Vector2f(windowWidth / 2, (windowHeight / NUM_OF_MENU + 1) * 1));

	menu[1].setFont(*font);
	menu[1].setString("Options");
	//menu[1].setFillColor(sf::Color(0, 0, 255));
	menu[1].setCharacterSize(30);
	menu[1].setPosition(sf::Vector2f(windowWidth / 2, (windowHeight / NUM_OF_MENU + 1) * 2));

	menu[2].setFont(*font);
	menu[2].setString("Author");
	//menu[2].setFillColor(sf::Color(0, 0, 255));
	menu[2].setCharacterSize(30);
	menu[2].setPosition(sf::Vector2f(windowWidth / 2, (windowHeight / NUM_OF_MENU + 1) * 3));

	menu[3].setFont(*font);
	menu[3].setString("Quit");
	//menu[3].setFillColor(sf::Color(0, 0, 255));
	menu[3].setCharacterSize(30);
	menu[3].setPosition(sf::Vector2f(windowWidth / 2, (windowHeight / NUM_OF_MENU + 1) * 4));

	selected = 0;
}

void MainMenu::Update(sf::RenderWindow *window)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		if (selected - 1 >= 0)
		{
			menu[selected].setFillColor(sf::Color::Red);
			selected--;
			menu[selected].setFillColor(sf::Color::Blue);
		}
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		if (selected + 1 < NUM_OF_MENU)
		{
			menu[selected].setFillColor(sf::Color::Red);
			selected++;
			menu[selected].setFillColor(sf::Color::Blue);
		}
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return))
	{
		switch (selected)
		{
		case 0:
			game.SetState(new MainGame());
			break;
		case 1:
			std::cout << "Options\n";
			break;
		case 2:
			std::cout << "Author\n";
			break;
		case 3:
			exit(0);
			break;
		default:
			std::cout << "Key unabled\n";
			break;
		}
	}
}

void MainMenu::Draw(sf::RenderWindow* window)
{
	window->draw(title);

	for (int i = 0; i < NUM_OF_MENU; i++)
	{
		window->draw(menu[i]);
	}
}