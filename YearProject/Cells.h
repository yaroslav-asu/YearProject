#pragma once
#include <SFML/Graphics.hpp>
#include "Game.h"

extern int null_genome[64];

class Cells
{
private:
	sf::RectangleShape center_rect, border_rect;
public:
	Cells(int coords[2], Game game, int parent_genome[64] = null_genome, sf::Color color = sf::Color(20, 150, 0));
};



