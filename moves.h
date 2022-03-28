#ifndef MOVES_H
#define MOVES_H
//white is held on top, green in the front and red on the right.
//movement of indexes to perform a clockwise rotation of the right face:
//2->37,18->23,32->47,4->35,17->20,7->32,10->2,16->18,12->4,19->17,15->7,21->16,42->10,44->12,22->19,
//47->15,23->21,37->42
void move_R(int cubestate[48])
{
    int c = cubestate[42];
    cubestate[42] = cubestate[37];
    cubestate[37] = cubestate[2];
    cubestate[2] = cubestate[10];
    cubestate[10] = c;

    int d = cubestate[47];
    cubestate[47] = cubestate[32];
    cubestate[32] = cubestate[7];
    cubestate[7] = cubestate[15];
    cubestate[15] = d;

    int e = cubestate[23];
    cubestate[23] = cubestate[18];
    cubestate[18] = cubestate[16];
    cubestate[16] = cubestate[21];
    cubestate[21] = e;

    int f = cubestate[44];
    cubestate[44] = cubestate[35];
    cubestate[35] = cubestate[4];
    cubestate[4] = cubestate[12];
    cubestate[12] = f;
    
    int g = cubestate[22];
    cubestate[22] = cubestate[20];
    cubestate[20] = cubestate[17];
    cubestate[17] = cubestate[19];
    cubestate[19] = g;
    }

#endif