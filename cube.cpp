// cube.cpp
#include "cube.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

RubiksCube::RubiksCube() {
    faces = vector<vector<vector<char>>>(6, vector<vector<char>>(3, vector<char>(3)));
    char colors[6] = { 'W', 'Y', 'G', 'B', 'O', 'R' }; // Up, Down, Front, Back, Left, Right
    for (int f = 0; f < 6; f++)
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                faces[f][i][j] = colors[f];
}

void RubiksCube::display() const {
    cout << "\n--- Rubik's Cube State ---\n";

    // Print Up face
    for (int i = 0; i < 3; i++) {
        cout << "      ";
        for (int j = 0; j < 3; j++) cout << faces[U][i][j] << ' ';
        cout << endl;
    }

    // Print Left, Front, Right, Back faces in one row
    for (int i = 0; i < 3; i++) {
        for (int f : {L, F, R, B}) {
            for (int j = 0; j < 3; j++) cout << faces[f][i][j] << ' ';
            cout << " ";
        }
        cout << endl;
    }

    // Print Down face
    for (int i = 0; i < 3; i++) {
        cout << "      ";
        for (int j = 0; j < 3; j++) cout << faces[D][i][j] << ' ';
        cout << endl;
    }
}

void rotateMatrix(vector<vector<char>>& face) {
    vector<vector<char>> temp = face;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            face[j][2 - i] = temp[i][j];
}

void RubiksCube::rotateFace(char face) {
    int f;
    switch (face) {
        case 'U': f = U; break;
        case 'D': f = D; break;
        case 'F': f = F; break;
        case 'B': f = B; break;
        case 'L': f = L; break;
        case 'R': f = R; break;
        default: cout << "Invalid face: " << face << endl; return;
    }
    rotateMatrix(faces[f]);
    rotateAdjacent(face);
}

void RubiksCube::rotateAdjacent(char face) {
    vector<char> temp(3);
    // Basic demo: no adjacent rotation yet
    // Extend this with full adjacent movement if needed
    cout << "[Debug] rotateAdjacent(" << face << ") called (not implemented)\n";
}

void RubiksCube::scramble(int moves) {
    srand(time(0));
    char cmds[6] = {'U', 'D', 'F', 'B', 'L', 'R'};
    for (int i = 0; i < moves; ++i) {
        int r = rand() % 6;
        rotateFace(cmds[r]);
    }
}

void RubiksCube::reset() {
    *this = RubiksCube();
}

string RubiksCube::getFaceString(Face face) const {
    string result;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            result += faces[face][i][j];
    return result;
}


