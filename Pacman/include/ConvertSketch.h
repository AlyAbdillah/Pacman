#pragma once
#ifndef CONVERTSKETCH_H
#define CONVERTSKETCH_H

#include "Global.h"
#include "Pacman.h"
#include <array>
#include <string>
#include <SFML/Graphics.hpp>
std::array<std::array<Cell, MAP_HEIGHT>,MAP_WIDTH> convert_sketch(const std::array<std::string, MAP_HEIGHT>& i_map_sketch, std::array<Position, 4>& i_ghost_positions, Pacman& i_pacman);

#endif
