#pragma once
#include <SFML/Graphics.hpp>
#include "CellsFieldImage.h"
class Game {
private:
	sf::RenderWindow window;
	CellsFieldImage fieldimage;
public:
	Game();
	void start();
};
