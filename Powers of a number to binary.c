#include <stdio.h>

/*
that should've been a function that converts decimal to binary and returns an array BUT that would require using pointers that I don't yet know. I will return later.

int * convert (int decimal) {
    int rem[101];
    int i = 0;
    while (decimal > 0) {
        rem[i] = decimal%2;
        decimal = decimal/2;
        i++;
    }
    return rem[101];
} */

//*add user input instead of 3

//count 1's
int count(int) {
    int rem[101];
    int i = 0;
    int counter = 0;
    
    while (rem[i] != '\0') {
        if (rem[i] = 1) {
            counter++; }
        i++;
    }

}

int main () {
    int i, j;
    int k = 0;
    int num = 1;
    int endNum = num;
    int decimal = 1;
    int counter = 0;
    int temp = 0;
    int powers = 0;
    
    printf("How much powers of 3 you want to check?\n");
    scanf ("%d", &powers);
    int rem[101];
    
    //big loop 
    for (i=1; i<=powers; i++) {
        endNum=endNum*3;
        printf("Power %d of 3 is: %d\n", i, endNum);
        decimal = endNum;
        //convert decimal to binary; store that in an array
        for (k=0; decimal>0; k++) {
            rem[k] = decimal%2;
            decimal = decimal/2;
    }
        //count();

    }
    printf("rem output: ");
    for (j=0; j<powers; j++)
        printf("%d ", rem[j]);

            
    return 0;
    
}

/*
Not from the course, but just something fun that I found.

Finden Sie alle Dreierpotenzen, deren binäre Notation genau drei Einsen enthält
Find all powers of 3, whose binary notation contains exactly three ones
*/
