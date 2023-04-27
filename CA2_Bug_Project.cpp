#include <iostream>
#include <string>
#include "Board.h"

using std::cin;
using std::cout;
using std::getline;
using std::string;

void printMenu()
{
    
      cout << "Choose an option:\n"
         << "1. Initialize Bug Board\n"
         << "2. Display All Bugs\n"
         << "3. Find a Bug by ID\n"
         << "4. Tap the Bug Board\n"
         << "5. Display Life History of all Bugs\n"
         << "6. Display All Cells\n"
         << "7. Run Simulation\n"
         << "8. Exit\n\n";
}

int getInput()
{
    int input = 0;
    string line;
    getline(cin, line);

    if (!line.empty())
    {
        input = line[0] - '0';
    }

    return input;
}

int main()
{
    Board game;
    cout << "Welcome to the Bug Game\n\n";
    while (true)
    {
        printMenu();

        int userInput = getInput();

        switch (userInput)
        {
        case 1:
            game.initialiseBugBoard();
            break;
        case 2:
            game.displayAllBugs();
            break;
        case 3:
            game.findBugByID();
            break;
        case 4:
            game.tapBoard();
            break;
        case 5:
            game.displayHistoryAllBugs();
            break;
        case 6:
            game.displayAllCells();
            break;
        case 7:
            game.runsimulation();
            break;
        case 8:
            cout << "Goodbye!\n";
            return 0;
        default:
            cout << "Invalid option!\n\n";
            break;
        }
    }

    return 0;
}
