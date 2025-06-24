// main.cpp
#include "cube.h"
#include "solver.h"
#include <iostream>
using namespace std;

int main() {
    RubiksCube cube;
    char input;

    cout << "Rubik's Cube Simulator\n";
    cout << "Commands:\n";
    cout << "  U/D/F/B/L/R - Rotate corresponding face\n";
    cout << "  s - Scramble the cube\n";
    cout << "  r - Reset cube\n";
    cout << "  d - Display cube\n";
    cout << "  v - Solve cube (placeholder solver)\n";
    cout << "  q - Quit\n\n";

    while (true) {
        cout << "Enter command: ";
        cin >> input;

        if (input == 'q') break;
        else if (input == 's') cube.scramble(20);
        else if (input == 'r') cube.reset();
        else if (input == 'd') cube.display();
        else if (input == 'v') {
            Solver solver(cube);
            solver.solve();
        }
        else if (input == 'U' || input == 'D' || input == 'F' || input == 'B' || input == 'L' || input == 'R')
            cube.rotateFace(input);
        else
            cout << "Invalid command. Try again.\n";
    }

    cout << "Exiting...\n";
    return 0;
}


