#include <stdio.h>
int main()
{
    int i = 1;
    int j;
    
    j = ++i;
    
    printf("j of ++i is %d\n", j);
    
    i = 1;
    j = i++;
    
    printf("j of i++ is %d", j);

    return 0;
}
