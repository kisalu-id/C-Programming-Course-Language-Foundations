#include <stdio.h>
#include <math.h>
//So much functions are just for training, I could have only one function with 'switch' there
double add(double, double);
double subtr(double, double);
double mult(double, double);
double divide(double, double);

int main()
{
    double a, b, answer;
    char op;
    printf("Enter what you want to calculate:\n");
    scanf("%lf %c %lf", &a, &op, &b);

    
    switch(op) {
        case '%':
            printf("All the number will be converted to integers, sorry 🤪\n");
            int aa, bb;
            aa = a + 1e-9;
            bb = b + 1e-9;
            answer = aa%bb;
            break;
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
        default:
            printf("Error\n");
        
    }
    
    printf("Result is: %.2lf\n", answer);

    return 0;
}


double add(double a, double b) {
    return a + b;
}

double subtr(double a, double b) {
    return a - b;
}

double mult(double a, double b) {
    return a * b;
}
    
double divide(double a, double b) {
    if (b == 0) {
        return 0;}
    else {
        return a / b;}
    
}
