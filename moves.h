#ifndef MOVES_H
#define MOVES_H
enum{
    WHITE = 1, GREEN, RED, ORANGE, BLUE, YELLOW
};
enum{
    R, R_Prime, R_2,L,L_Prime,L2,F,F_Prime,F2,B,B_Prime,B2,U,U_Prime,U2,D,D_Prime,D2
};
int 
moves[18] = {R, R_Prime, R_2,L,L_Prime,L2,F,F_Prime,F2,B,B_Prime,B2,U,U_Prime,U2,D,D_Prime,D2};
//white is held on top, green in the front and red on the right.
//an R move is defined as the clockwise rotation of the squares present in the indexes:
//2,37,42,10
//7,32,47,15
//16,18,23,21
//4,35,44,12
//17,20,22,19
//an R' move is denoted by the movement of the same indexes in the anticlockwise direction.

void 
switch_Case(int cubestate[48], int index1, int index2, int index3, int index4, char move)
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

void
moveFace(int cubestate[48], int move)
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
        case R_Prime:{
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
        break;
        case U:{
            switch_Case(cubestate,10,26,34,18,'C');
            switch_Case(cubestate,16,8,24,32,'C');
            switch_Case(cubestate,7,5,0,2,'C');
            switch_Case(cubestate,6,3,1,4,'C');
            switch_Case(cubestate,9,25,33,17,'C');
        }
        break;
        case U_Prime:{
            switch_Case(cubestate,10,26,34,18,'A');
            switch_Case(cubestate,16,8,24,32,'A');
            switch_Case(cubestate,7,5,0,2,'A');
            switch_Case(cubestate,6,3,1,4,'A');
            switch_Case(cubestate,9,25,33,17,'A');
        }
        break;
        case U2:{
            switch_Case(cubestate,0,2,7,5,'T');
            switch_Case(cubestate,1,4,6,3,'T');
            switch_Case(cubestate,10,8,34,32,'T');
            switch_Case(cubestate,16,26,24,18,'T');
            switch_Case(cubestate,17,9,25,33,'T');
        }
        break;
        case D:{
            switch_Case(cubestate,13,21,37,29,'C');
            switch_Case(cubestate,15,23,39,31,'C');
            switch_Case(cubestate,42,47,45,40,'C');
            switch_Case(cubestate,14,22,38,30,'C');
            switch_Case(cubestate,41,44,46,43,'C');
        }
        break;
        case D_Prime:{
            switch_Case(cubestate,13,21,37,29,'A');
            switch_Case(cubestate,15,23,39,31,'A');
            switch_Case(cubestate,42,47,45,40,'A');
            switch_Case(cubestate,14,22,38,30,'A');
            switch_Case(cubestate,41,44,46,43,'A');
        }
        break;
        case D2:{
            switch_Case(cubestate,15,37,39,13,'T');
            switch_Case(cubestate,21,23,29,31,'T');
            switch_Case(cubestate,40,42,47,45,'T');
            switch_Case(cubestate,41,44,46,43,'T');
            switch_Case(cubestate,14,22,38,30,'T');
        }
        break;
        case F:{
            switch_Case(cubestate,5,16,42,31,'C');
            switch_Case(cubestate,7,21,40,26,'C');
            switch_Case(cubestate,8,10,15,13,'C');
            switch_Case(cubestate,6,19,41,28,'C');
            switch_Case(cubestate,9,13,14,11,'C');
        }
        break;
        case F_Prime:{
            switch_Case(cubestate,5,16,42,31,'A');
            switch_Case(cubestate,7,21,40,26,'A');
            switch_Case(cubestate,8,10,15,13,'A');
            switch_Case(cubestate,6,19,41,28,'A');
            switch_Case(cubestate,9,13,14,11,'A');
        }
        break;
        case F2:{
           switch_Case(cubestate,5,7,42,40,'T');
           switch_Case(cubestate,26,16,21,31,'T');
           switch_Case(cubestate,8,10,15,13,'T');
           switch_Case(cubestate,6,19,41,28,'T');
           switch_Case(cubestate,9,12,14,11,'T'); 
        }
        break;
        case B:{
            switch_Case(cubestate,2,24,45,23,'C');
            switch_Case(cubestate,0,29,47,18,'C');
            switch_Case(cubestate,32,34,39,37,'C');
            switch_Case(cubestate,1,27,46,20,'C');
            switch_Case(cubestate,33,36,38,35,'C');
        }
        break;
        case B_Prime:{
            switch_Case(cubestate,2,24,45,23,'C');
            switch_Case(cubestate,0,29,47,18,'C');
            switch_Case(cubestate,32,34,39,37,'C');
            switch_Case(cubestate,1,27,46,20,'C');
            switch_Case(cubestate,33,36,38,35,'C');
        }
        break;
        case B2:{
            switch_Case(cubestate,2,0,45,47,'T');
            switch_Case(cubestate,23,18,24,29,'T');
            switch_Case(cubestate,32,34,39,37,'T');
            switch_Case(cubestate,1,27,46,20,'T');
            switch_Case(cubestate,33,36,38,35,'T');
        }
        break;
    }
}

#endif