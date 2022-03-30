#ifndef INTIALIZE_H
#define INTIALIZE_H
#include "moves.h"
void solve(int cubearray[48], char movelist[21])
{
    moveFace(cubearray,L_Prime);;
    for(int i = 0; i<48;++i)
    {
        printf("%d\n",cubearray[i]);
    }
}

#endif