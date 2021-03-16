#include "Cells.h"

Cells::Cells(int coords[2], Game game, int parent_genome[64], sf::Color color)
{
	center_rect.setSize(sf::Vector2f(8, 8));
	center_rect.setFillColor(sf::Color(20, 150, 0));
	border_rect.setSize(sf::Vector2f(10, 10));
	border_rect.setFillColor(sf::Color(80, 80, 80));
	/*int x = coords[0], y = coords[1];
	Game game = game;
	Cells parent = parent;
	sf::Color color = color;*/
}
//#include "core.h"
//extern const unsigned int genome_lenth;
//extern int null_genome[64];
//class Cells {
//
//public:
//	Cells(int coords[2], Game game, int parent_genome[64] = null_genome, sf::Color color = sf::Color(20, 150, 0)) {
//		
//	}
//	
//	
//	
//	
//};