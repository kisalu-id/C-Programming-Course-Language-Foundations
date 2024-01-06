#include <stdio.h>
void num (int a) {
    static int b = 3;
    printf("%d\n", (a+b));
    b+=4;
}
int main()
{
    num(5);
    num(5);
    return 0;
}
//the value of b persists until the end of a program, so in the 2ns function call it will be 7 instead of 3
