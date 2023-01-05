#pragma once
#ifndef DRAWMAP_H
#define DRAWMAP_H

void draw_map(const std::array<std::array<Cell, MAP_HEIGHT>, MAP_WIDTH>& i_map, sf::RenderWindow& i_window);

#endif
