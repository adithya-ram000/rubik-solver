// cube.h
#ifndef CUBE_H
#define CUBE_H

#include <vector>
#include <string>

enum Face { U, D, F, B, L, R };

class RubiksCube {
private:
    std::vector<std::vector<std::vector<char>>> faces;
    void rotateAdjacent(char face);

public:
    RubiksCube();
    void display() const;
    void rotateFace(char face);
    void scramble(int moves);
    void reset();
    std::string getFaceString(Face face) const;
};

#endif // CUBE_H

