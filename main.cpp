#include "MainMenu.h"

using namespace sf;

GameState game;

int main()
{
	RenderWindow window(VideoMode(1280, 768), "Game title", Style::Default);

	// Set up the window
	game.SetWindow(&window);
	game.SetState(new MainMenu(window.getSize().x, window.getSize().y - 75));

	while (window.isOpen())
	{
		Event ev;
		while (window.pollEvent(ev))
		{
			switch (ev.type)
			{
			case Event::Closed:
				window.close();
				break;
			case Event::KeyPressed:
				switch (ev.key.code)
				{
				case Keyboard::Escape:
					window.close();
					break;
				}
				break;
			}

			window.clear(sf::Color(182, 220, 118));

			game.Update();
			game.Draw();
			
			window.display();
		}
	}

	return 0;
}