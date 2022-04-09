#include <iostream>
#include <stdio.h>
#include "moves.h"

struct
node{
    int nodedata[48];
    struct node * r;
    struct node * r_prime;
    struct node * r2;
    struct node * l;
    struct node * l_prime;
    struct node * l2;
    struct node * f;
    struct node * f_prime;
    struct node * f2;
    struct node * u;
    struct node * u_prime;
    struct node * u2;
    struct node * d;
    struct node * d2;
    struct node * d_prime;
    struct node * b;
    struct node * b2;
    struct node * b_prime;   
};

bool 
checkPhase1(int cubestate[48])
{
    
}

int* 
phase1(int cubestate[48],int depth)
{

}