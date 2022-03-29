#ifndef MOVES_H
#define MOVES_H
enum{
    WHITE = 1, GREEN, RED, ORANGE, BLUE, YELLOW
};
enum{
    R, R_Prime, R_2
};
//white is held on top, green in the front and red on the right.
//an R move is defined as the clockwise rotation of the squares present in the indexes:
//2,37,42,10
//7,32,47,15
//16,18,23,21
//4,35,44,12
//17,20,22,19
//an R' move is denoted by the movement of the same indexes in the anticlockwise direction.

void switch_Case(int cubestate[48], int index1, int index2, int index3, int index4, char move)
{
    switch(move)
    {
        //clockwise rotation
        case 'C':{
            int c = cubestate[index3];
            cubestate[index3] = cubestate[index2];
            cubestate[index2] = cubestate[index1];
            cubestate[index1] = cubestate[index4];
            cubestate[index4] = c;
        }
        break;
        //anitclockwise rotation
        case 'A':
        {
            int e = cubestate [index2];
            cubestate[index2] = cubestate[index3];
            cubestate[index3] = cubestate[index4];
            cubestate[index4] = cubestate[index1];
            cubestate[index1] = e; 
        }
        break;
        //double rotation
        case 'T':
        {
            cubestate[index1] = cubestate[index1] + cubestate[index3];
            cubestate[index3] = cubestate[index1] - cubestate[index3];
            cubestate[index1] = cubestate[index1] - cubestate[index3];

            cubestate[index2] = cubestate[index4] + cubestate[index2];
            cubestate[index4] = cubestate[index2] - cubestate[index4];
            cubestate[index2] = cubestate[index2] - cubestate[index4];

        }
        break;
    }
}

void moveFace(int cubestate[48], int move)
{
    switch(move){
        case R:{
            switch_Case(cubestate,2,37,42,10,'C');
            switch_Case(cubestate,7,32,47,15,'C');
            switch_Case(cubestate,16,18,23,21,'C');
            switch_Case(cubestate,4,35,44,12,'C');
            switch_Case(cubestate,17,20,22,19,'C');
        }
        break;
        case R_Prime:{//S denotes R'
            switch_Case(cubestate,2,37,42,10,'A');
            switch_Case(cubestate,7,32,47,15,'A');
            switch_Case(cubestate,16,18,23,21,'A');
            switch_Case(cubestate,4,35,44,12,'A');
            switch_Case(cubestate,17,20,22,19,'A');
        }   
        break;
        case R_2:{
            switch_Case(cubestate,2,47,42,7,'T');
            switch_Case(cubestate,32,37,15,10,'T');
            switch_Case(cubestate,16,18,23,21,'T');
            switch_Case(cubestate,4,35,44,12,'T');
            switch_Case(cubestate,17,20,22,19,'T');
        }

    }
}

#endif