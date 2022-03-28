#ifndef INTIALIZE_H
#define INTIALIZE_H
#include "moves.h"
enum{
    WHITE = 1, GREEN, RED, ORANGE, BLUE, YELLOW
};

void solve(int cubearray[48], char movelist[21])
{
    move_R(cubearray);
    printcube(cubearray);
}

#endif