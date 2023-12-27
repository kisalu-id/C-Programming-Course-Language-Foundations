
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
//  Note* add user input instead of 3
#include <stdio.h>
int main () {
    int i, k, temp, powers, found = 0;
    int l = 0;
    int counterOf1s = 0;
    int endNum = 1;
    int decimal = 1;
    int rem [101];
    printf("How much powers of 3 you want to check?\n");
    scanf ("%d", &powers);

    //big loop 
    //i = 1 so I can use that as loop counter AND as ("power of %d", i) in my output
    for (i=1; i<=powers; i++) {
        endNum = endNum*3;
        printf("Power %d of 3 is: %d\n", i, endNum);
        decimal = endNum;
        
        //convert decimal to binary; store that in an array
        for (k=0; decimal>0; k++) {
            rem[k] = decimal%2;
            decimal = decimal/2;
        }
        //an error here, C sees zeros in an array as null terminators.
        l = 0;
        counterOf1s = 0;
        printf("rem of %d output: ", endNum);
        while (rem[l] != '\0') {
        printf("%d ", rem[l]);
        if (rem[l] == 1) {
            counterOf1s++; }
        l++;
        }
        if (counterOf1s == 3) {
            found++; }
    printf("\n");
    }

    printf("\nHow much powers of 3 in binary that contain three ones: %d", found);

    return 0;

}

/*
Not from the course, but just something fun that I found.
Finden Sie alle Dreierpotenzen, deren binäre Notation genau drei Einsen enthält
Find all powers of 3, whose binary notation contains exactly three ones
*/
