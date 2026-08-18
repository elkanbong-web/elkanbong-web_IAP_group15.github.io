#include "Movement.h"
#include <conio.h> // For _getch()

int main() {
    Movement game(15, 'P'); // Grid size 15, player symbol 'P'
	
    char input;
    while (true) {
        game.printGrid();
        std::cout << "Move (w/a/s/d): \n";
        input = _getch(); // Uses getch so input does not need 'enter' key
        game.movePlayer(input);
        system("cls"); // Clears map for better visuals
    }

    return 0;
}
