#include <stdio.h>
int main(void) {
    int ages[10];
    int i;
    int ageMin = 0;
    for (i=0; i<10; i++) {
        scanf("%d", &ages[i]);
        if (ages[i] < ageMin) {
            ageMin = ages[i];
        }
    }
    printf("The minimum age is %d.\n", ageMin);
    printf("Age differences with the youngest person:\n");
    for(i=0;i<10;i++){
        printf("%d:%d ", ages[i], ages[i]-ageMin);
    }
    return 0;
}
/*
Find the minimum age and print out the age differences with the youngest person.
*/
