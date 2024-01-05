
/*
Task:
Finden Sie alle Dreierpotenzen, deren binäre Notation genau drei Einsen enthält
Find all powers of 3, whose binary notation contains exactly three ones
*/


/*
These should've been functions that use pointers - I don't yet know that. Will return later.
//a function that converts decimal to binary and returns an array
int * convert (int decimal) {
    int rem[101];
    int i = 0;
    while (decimal > 0) {
        rem[i] = decimal%2;
        decimal = decimal/2;
        i++;
    }
    return rem[101];
}
//count 1's
int count(int) {
    int rem[101];
    int i = 0;
    int counter = 0;

    while (rem[i] != '\0') {
        if (rem[i] == 1) {
            counter++; }
        i++;
    }
}
*/
//  Note* add user input instead of 3. For some reason this program is unstable, e. g. I input "40" it outputs "0" then "1". Dunno if that's an IDE issue
#include <stdio.h>
#define MAX_BITS 32
int main () {
    int powers, found = 0;
    unsigned int endNum = 1;
    unsigned int decimal = 1;
    int rem [MAX_BITS];
    
    printf("How much powers of 3 you want to check?\n");
    scanf ("%d", &powers);

    //big loop starts here:
    //in case of stack overflow print out an error
    //i = 1 so I can use that as loop counter AND as ("power of %d", i) in my output
    for (int i=1; i<=powers; i++) {
        decimal = endNum*3;
        if (decimal/3 != endNum) {
            printf("\nError: stack overflow. Reached the limit of representable powers. Exiting.\n");
            return 0;
        }
        
        printf("\nPower %d of 3 is: %u\n", i, decimal);
        endNum = decimal;
        
        //convert decimal to binary; store that in an array
        for (int j=0; decimal>0; j++) {
            rem[j] = decimal%2;
            decimal = decimal/2;
        }
        
        //count all the 1's in a binary iteration
        int counterOf1s = 0;
        for (int j = 0; j<MAX_BITS; j++) {
            if (rem[j] == 1) {
                counterOf1s++; }
            }
        printf("Sum of 1's of %u in binary iteration is: %d\n", powers, counterOf1s);
        
        //indicator for checking
        if (counterOf1s == 3) {
            found++; 
            printf("I FOUND THREE ONES AT A BINARY ITERATION OF %u!\n", endNum);
        }
    }

    printf("\nChecked the binary representation for %d powers of 3. Powers of 3 in binary that contain exactly three ones: %d", powers, found);

    return 0;
}
