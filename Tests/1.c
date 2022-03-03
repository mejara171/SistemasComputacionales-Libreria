/**
 * @file Test 1
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-02-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>


//Test 2
// void funcPrint(char *pstring);

// int main(void) 
// {
//     funcPrint("Hola Mundo Cruel");
//     return(0);
// }


//TEST 3
// int main(void) 
// {
//     printf("Catano gay\n");
//     return EXIT_SUCCESS;
// }

// #define M 5
// #define C 5

// int main(int argc, char*argv[]) {
//     int x =2;
//     int y =x*M + C;
//     return 0;
// }

//TEST 4

//     #define M 5
//     #define C 5
//     #define MAP(val,m,c) val*m+c

// int main(int argc, char* argv[]) {
//     int x = 2;
//     int y = MAP(x,M,C);
//     return 0;


//TEST 5

#define M 5
    #define C 5
    #define MAP(val,m,c) x*m+c

int main(int argc, char* argv[]) {
    int x = 2;
    int y = MAP(x,M,C);
    printf("y: %d", y);
    return 0;
}