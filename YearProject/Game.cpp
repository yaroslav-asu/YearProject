#include "Game.h"
//extern int window_width, window_height;
#include "GlobalVariables.h"
Game::Game()
{
	window.create(sf::VideoMode(window_width, window_height), "SFML Works!");
	window.setFramerateLimit(60);
	CellsFieldImage fieldimage;
	
}
void Game::start()
{
	int counter = 0;
	bool fl = true;
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
		counter++;
		if (counter > 100 && fl) {
			/*sf::RectangleShape rect1, rect2;
			rect1.setSize(sf::Vector2f(10, 10));
			rect1.setFillColor(sf::Color(10, 10, 123)); 
			rect1.setSize(sf::Vector2f(8, 8));
			rect1.setFillColor(sf::Color(120, 100, 123));
			fieldimage.add(rect1, rect2, 0, 10);
			fl = false;*/
			//generate_cells();
		}
		window.draw(fieldimage.get_image());
		window.display();
	}
}

void Game::generate_cells() {
	sf::RectangleShape rect_front, background;
	rect_front.setSize(sf::Vector2f(8, 8));
	rect_front.setFillColor(sf::Color(0, 255, 0));
	background.setSize(sf::Vector2f(10, 10));
	background.setFillColor(sf::Color(255, 255, 0));
	fieldimage.add(rect_front, background, 20, 20);
	for (int i = 0; i < window_height / 10; i++)
		for (int j = 0; j < window_width / 10; j++) {
			fieldimage.add(rect_front, background, j * 10, i * 10);
		}
}
