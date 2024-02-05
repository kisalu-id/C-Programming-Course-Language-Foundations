/*
Task:
Finden Sie alle Dreierpotenzen, deren binäre Notation genau drei Einsen enthält
Find all powers of 3, whose binary notation contains exactly three ones
*/

//Note* add user input instead of 3? That's very easy tho and doesn't change much

#include <stdio.h>
#define MAX_BITS 32

void convert (int, int *);
int count (int *);

int main () {
    int powers, counterOf1s, found = 0;
    unsigned int endNum = 1;
    unsigned int decimal = 1;
    int rem[MAX_BITS];
    
    printf("How much powers of 3 you want to check?\n");
    scanf ("%d", &powers);

    //big loop starts here:
    //i = 1 so I can use that as loop counter AND as ("power of %d", i) in my output
    for (int i=1; i<=powers; i++) {
        decimal = endNum*3;
        //in case of stack overflow print out an error
        if (decimal/3 != endNum) {
            printf("\nChecked the binary representation for as much powers of 3 as possible, in case of using \"unsigned int\" type of data: 20.\nPowers of 3 in binary that contain exactly three ones: %d\n", found);

            printf("\nError: stack overflow. Reached the limit of representable powers. Exiting.\n");
            return 0;
        }
        
        printf("\nPower %d of 3 is: %u\n", i, decimal);
        endNum = decimal;
        
        convert(decimal, rem);
        counterOf1s = count(rem);
        
        for (int i=MAX_BITS; i>=0; i--) {
            printf("%d ", rem[i]);
        }
        
        printf("\nSum of 1's of %u in binary iteration is: %d\n", endNum, counterOf1s);
        
        //indicator for checking
        if (counterOf1s == 3) {
            found++; 
            printf("I FOUND THREE ONES AT A BINARY ITERATION OF %u!\n", endNum);
        }
    }

    printf("\nChecked the binary representation for %d powers of 3. Powers of 3 in binary that contain exactly three ones: %d", powers, found);

    return 0;
}

//a function that converts decimal to binary and returns an array
void convert (int decimal, int *rem) {
    int i = 0;
    while (decimal > 0) {
        rem[i] = decimal%2;
        decimal = decimal/2;
        i++;
    }
}
 
//count 1's
int count(int *rem) {
    int counter = 0;
    for (int i=0; i<=MAX_BITS; i++) {
        if (rem[i] == 1) {
            counter++; }
    }
    return counter;
}
