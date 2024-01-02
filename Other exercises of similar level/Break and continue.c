#include <stdio.h>
int main() {
    int num;
    int sum = 0;
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &num);
        
        if (num == 0)
        break;
        
        if (num < 0)
            continue;
        
        sum = sum + num;
        }
        printf("%d", sum);
        
	return 0;	
}
/*a program that counts a sum of positive numbers, ignores negative numbers and terminates by 0*/
