#include <stdio.h>
int main () {
    int i, j;
    int nbStars = 0;
    scanf("%d", &nbStars);
    for (i=0; i<nbStars; i++) {
        for (j=0; j<nbStars; j++) {
        printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*
Create a program that displays on the screen a square of n x n stars, with the integer n given as an input.
Example
Input:
5

Output:
*****
*****
*****
*****
*****

*/
