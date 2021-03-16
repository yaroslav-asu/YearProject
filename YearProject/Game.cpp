#include "Game.h"
Game::Game()
{
	window.create(sf::VideoMode(900, 600), "SFML Works!");
	window.setFramerateLimit(60);
}
void Game::start()
{
	while (window.isOpen())
	{
		
		//window.clear(sf::Color(100, 100, 100));
		//window.draw(fieldimage.get_image());
		/*window.draw(fieldimage.get_image());*/
		
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		//window.clear(sf::Color(250, 220, 100, 0));
		window.draw(fieldimage.get_image());
		window.display();
	}
}
