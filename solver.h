// solver.h
#ifndef SOLVER_H
#define SOLVER_H

#include "cube.h"

class Solver {
public:
    Solver(RubiksCube& cube);
    void solve();

private:
    RubiksCube& cube;
    void solveWhiteCross();
    void solveWhiteCorners();
    void solveMiddleLayer();
    void solveYellowFace();
    void solveFinalLayer();
};

#endif // SOLVER_H