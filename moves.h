#ifndef MOVES_H
#define MOVES_H
//white is held on top, green in the front and red on the right.
//movement of indexes to perform a clockwise rotation of the right face:
//2->37,18->23,32->47,4->35,17->20,7->32,10->2,16->18,12->4,19->17,15->7,21->16,42->10,44->12,22->19,
//47->15,23->21,37->42

void switch_R(int cubestate[48], int index1, int index2, int index3, int index4)
{
    int c = cubestate[index3];
    cubestate[index3] = cubestate[index2];
    cubestate[index2] = cubestate[index1];
    cubestate[index1] = cubestate[index4];
    cubestate[index4] = c;
}

void move_R(int cubestate[48])
{
    switch_R(cubestate,2,37,42,10);

    switch_R(cubestate,7,32,47,15);

    switch_R(cubestate,16,18,23,21);

    switch_R(cubestate,4,35,44,12);

    switch_R(cubestate,17,20,22,19)

}

#endif