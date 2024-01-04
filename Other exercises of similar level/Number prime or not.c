#include <stdio.h>

int checkPrime (int num) {
    
//I could include print statements here but I think this stucture is better
    if (num<2) {
        return 0; //numbers less than 2 are not prime
    }
    for (int i=2; i<num; i++) {
        
        if (num%i==0) {
            return 0; //not prime
        }
    }
    return 1; //if prime
}

int main()
{
    int num;
    printf("Please input a number you wish to verify for primality:\n");
    scanf("%d", &num);
    
    printf("The number %d is %sprime", num, checkPrime(num) ? "" : "not ");
   
    return 0;
}
