#pragma once
#include <SFML/Graphics.hpp>
class CellsFieldImage {
private:
	sf::RenderTexture cells_field_image;
	sf::RectangleShape background;
public:
	CellsFieldImage();
	sf::Sprite get_image();
	void add(sf::RectangleShape image, sf::RectangleShape background, int x, int y);
};
