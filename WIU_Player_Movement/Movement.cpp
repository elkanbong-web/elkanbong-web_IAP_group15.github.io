#include "Movement.h"

// Constructor
Movement::Movement(int size, char symbol)
    : gridSize(size), playerSymbol(symbol) {
    player = { 0, 0 }; // Default start at top-left
    initializeGrid();
}

// Initialize grid with '.' and place player
void Movement::initializeGrid() {
    for (int y = 0; y < gridSize; y++) {
        for (int x = 0; x < gridSize; x++) {
            grid[y][x] = ".";
        }
    }
    grid[player.y][player.x] = std::string(1, playerSymbol);
}

// Print the grid
void Movement::printGrid() const {
    for (int y = 0; y < gridSize; y++) {
        for (int x = 0; x < gridSize; x++) {
            std::cout << grid[y][x] << " ";
        }
        std::cout << "\n";
    }
}

// Handle player movement
void Movement::movePlayer(char input) {
    int newX = player.x;
    int newY = player.y;

    if (input == 'w') newY--;       // Up
    else if (input == 's') newY++;  // Down
    else if (input == 'a') newX--;  // Left
    else if (input == 'd') newX++;  // Right
    else {
        std::cout << "Invalid input.\n";
        return;
    }

    // Check boundaries
    if (newX < 0 || newX >= gridSize || newY < 0 || newY >= gridSize) {
        std::cout << "Invalid move: out of bounds.\n";
        return;
    }

    // Update grid
    grid[player.y][player.x] = ".";
    player.x = newX;
    player.y = newY;
    grid[player.y][player.x] = std::string(1, playerSymbol);
}

// Get player position
Position Movement::getPlayerPosition() const {
    return player;
}

// Set player position manually
void Movement::setPlayerPosition(int x, int y) {
    if (x >= 0 && x < gridSize && y >= 0 && y < gridSize) {
        grid[player.y][player.x] = ".";
        player.x = x;
        player.y = y;
        grid[player.y][player.x] = std::string(1, playerSymbol);
    }
    else {
        std::cout << "Invalid position.\n";
    }
}
