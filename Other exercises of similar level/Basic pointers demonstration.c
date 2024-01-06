#include <stdio.h>

int main() {
    int *pa, a;
    
    a = 1;
    pa = &a; //assign address of a to a pointer
    
    printf("Value of a = %d\n\n", a); //output: 1
    
    //address stored here, bc pointers store addresses, ("%p", pa);
    printf("Value of pa = %p\n\n", pa); //output: address
    
    //initial a address
    printf("Address of a = %p\n\n", &a); //output: same address
    
    //Value in that address = 1, ("%d", *pa);
    //* is called dereference operator, with it we access a value stored at pa address
    printf("Value stored in pa address = %d\n\n", *pa); //output: 1
    
    a = 3;
    
    printf("Updated value stored in pa address = %d\n\n", *pa); //output: 3
    
    *pa = 5;
    
    printf("Once more updated value stored in pa address = %d\n\n", *pa); //output: 5
    
    return 0;
}
