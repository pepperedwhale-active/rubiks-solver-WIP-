#ifndef MOVES_H
#define MOVES_H
enum{
    WHITE = 1, GREEN, RED, ORANGE, BLUE, YELLOW
};
enum{
    R, R_Prime, R_2,L,L_Prime,L2,F,F_Prime,F2,B,B_Prime,B2,U,U_Prime,U2,D,D_Prime,D2
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
        break;
        case L:{
            switch_Case(cubestate,0,8,40,39,'C');
            switch_Case(cubestate,5,13,45,34,'C');
            switch_Case(cubestate,24,26,31,29,'C');
            switch_Case(cubestate,25,28,30,27,'C');
            switch_Case(cubestate,3,11,43,36,'C');
        }
        break;
        case L_Prime:{
            switch_Case(cubestate,0,8,40,39,'A');
            switch_Case(cubestate,5,13,45,34,'A');
            switch_Case(cubestate,24,26,31,29,'A');
            switch_Case(cubestate,25,28,30,27,'A');
            switch_Case(cubestate,3,11,43,36,'A');
        }
        break;
        case L2:{
            switch_Case(cubestate,0,45,40,5,'T');
            switch_Case(cubestate,25,28,30,27,'T');
            switch_Case(cubestate,3,11,43,36,'T');
            switch_Case(cubestate,24,26,31,29,'T');
            switch_Case(cubestate,34,8,13,39,'T');
        }
    }
}

#endif