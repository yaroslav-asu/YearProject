#include "CellsFieldImage.h"
#include "GlobalVariables.h"
#include "Game.h"
CellsFieldImage::CellsFieldImage()
{
	cells_field_image.create(window_width, window_height);
	background.setFillColor(sf::Color(rand() % 250, rand() % 250, rand() % 250));
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
	sf::RectangleShape rect;
	rect.setSize(sf::Vector2f(10, 10));
	rect.setFillColor(sf::Color(10, 10, 123));
	rect.setPosition(x, y);
	cells_field_image.draw(rect);

	background.setPosition(x, y);
	cells_field_image.draw(background);
	image.setPosition(x + 1, y + 1);
	cells_field_image.draw(image);
}
