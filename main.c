#include <stdio.h>
#include <iostream>
#include "solve.h"
//the cube denoted by an array of 48 elements starting at the top left square of the top(U) face.Indexing
//happens from left to right of each face(centres are not indexed since they are always in the same position
//relative to each other).Indexing of faces takes place in the following order:
//white, green, red, organge, blue, yellow.


int main(int argc, char* argv[])
{
    int cubestate[48] = {
        WHITE, WHITE,WHITE,
        WHITE,WHITE,
        WHITE,WHITE,WHITE,
        GREEN,GREEN,GREEN,
        GREEN,GREEN,
        GREEN,GREEN,GREEN,
        RED,RED,RED,
        RED,RED,
        RED,RED,RED,
        ORANGE,ORANGE,ORANGE,
        ORANGE,ORANGE,
        ORANGE,ORANGE,ORANGE,
        BLUE,BLUE,BLUE,
        BLUE,BLUE,
        BLUE,BLUE,BLUE,
        YELLOW,YELLOW,YELLOW,
        YELLOW,YELLOW,
        YELLOW,YELLOW,YELLOW
    };
    char movelist[21];
    solve(cubestate,movelist);
    // printf("Cube has been solved:\n solution-%s",movelist);
}
