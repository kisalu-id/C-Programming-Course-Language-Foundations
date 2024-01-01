#include <stdio.h>
#include <math.h>
double add(double, double); //So much functions are just for training
double subtr(double, double);
double mult(double, double);
double divide(double, double);

int main()
{
    double a, b, answer;
    char op;
    
    printf("Enter an operator you want to execute:\n");
    scanf("%c", &op);
    printf("Enter two numbers:\n");
    scanf("%lf %lf", &a, &b);
    
    switch(op) {
        case '^':
            answer = pow(a, b);
            break;
            
        case '+':
            answer = add(a, b);
            break;
            
        case '-':
            answer = subtr(a, b);
            break;

        case '*':
            answer = mult(a, b);
            break;

        case '/':
            if (b == 0) {
                printf("Dividing on 0 isn't possible.\n");
                return 0; }
            else {
            answer = divide(a, b); }
            break;
        
    }
    
    printf("Result is: %.2lf\n", answer);

    return 0;
}


double add(double a, double b) {
    double c;
    c = a + b;
    return c;
}

double subtr(double a, double b) {
    double c;
    c = a - b;
    return c;
}

double mult(double a, double b) {
    double c;
    c = a * b;
    return c;
}
    
double divide(double a, double b) {
    double c;
    if (b == 0) {
        return 0;}
    else {
        c = a / b; }
    return c;
}
