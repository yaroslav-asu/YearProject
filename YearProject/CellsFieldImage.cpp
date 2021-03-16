#include "CellsFieldImage.h"
CellsFieldImage::CellsFieldImage()
{
	cells_field_image.create(900, 600);
	background.setFillColor(sf::Color(140, 140, 140));
	background.setPosition(0, 0);
	background.setSize(sf::Vector2f(900, 600));
	cells_field_image.draw(background);
}

sf::Sprite CellsFieldImage::get_image()
{
	sf::Sprite sprite;
	sprite.setTexture(cells_field_image.getTexture());
	sprite.setPosition(0, 0);
	return sprite;
}

void CellsFieldImage::add(sf::RectangleShape image, sf::RectangleShape background, int x, int y)
{
	background.setPosition(x, y);
	cells_field_image.draw(background);
	image.setPosition(x + 1, y + 1);
	cells_field_image.draw(image);
}
