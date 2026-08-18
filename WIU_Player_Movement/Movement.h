#pragma once

#include "Position.h"
#include <string>
#include <iostream>

class Movement {
private:
    int gridSize;                  // Grid size (default 20, configurable)
    char playerSymbol;             // Player symbol (default 'P')
    std::string grid[50][50];      // Static grid (max size 50x50 for safety)
    Position player;               // Player position

public:
    // Constructor
    Movement(int size = 15, char symbol = 'P');

    // Initialize grid with '.' and place player
    void initializeGrid();

    // Print the grid
    void printGrid() const;

    // Handle player movement
    void movePlayer(char input);

    // Get player position
    Position getPlayerPosition() const;

    // Set player position manually
    void setPlayerPosition(int x, int y);
};
