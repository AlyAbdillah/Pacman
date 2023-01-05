#pragma once
#ifndef DRAWTEXT_H
#define DRAWTEXT_H
#include <SFML/Graphics.hpp>

void draw_text(bool i_center, unsigned short i_x, unsigned short i_y, const std::string& i_text, sf::RenderWindow& i_window);
#endif
