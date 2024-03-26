#include <stdio.h>

int main (int argc, string argv[]) {
    printf("Here is your input:\n");
    for (int i=0; i<argc; i++) {
        printf("argv[%i] is%s\n", i, argv [i]) ;
    }

    if (argc !=2) {
        printf("You have to write a number as input in your CLI\n");
        return 1;
    }
    
    int num = atoi (argv[1]) ;
    for (int i=0; i<num; i++) {
        for (int j=0; j<num; j++) {
            printf("#");
        }
    printf("\n");
    }
    return 0;
}
