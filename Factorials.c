#include <stdio.h>
int main()
{
    int f, i = 0;
    long int result = 1;
    
    printf("Find factorial of:\n");
    scanf("%d", &f);
    
    if (f<0)
        printf("Error, can't count with negative numbers.\n");
        
    else if (f==0)
        printf("Factorial of 0 is 1\n");
        
    else if (f>=1 && f<21) {
        for (i=1; i<=f; ++i) {
            result = result*i;
        }
        printf("Factorial of %d is %li.\n", f, result);
    }
    else if (f>20)
        printf("Error, the number is too big");
    
    else
        printf("Error");
    
    return 0;
}
