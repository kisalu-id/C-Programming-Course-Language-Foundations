#include <stdio.h>
int main () {
    int num, input;
    int tries = 1;
    scanf("%d", &num);
    scanf("%d", &input);
    while (input!=num) {
        while (input>num) {
        printf("it is less\n");
        tries++;
        scanf("%d", &input);
        }
        while (input<num) {
        printf("it is more\n");
        tries++;
        scanf("%d", &input);
        }
    }
        printf("Number of tries needed:\n%d", tries);
    return 0;
}

/*
We would like you to develop a program capable of making a child play automatically the game of "more or less" -- the child must try to guess a secret number. The program should respond to each guess with "it is more" or "it is less" until the child finds the right number.
Your program must first read an integer indicating the number that the child will have to find during the game. Next the program should repeatedly read the player's guesses and display the text "it is more" if the child has submitted a smaller number or "it is less" if they have submitted a larger number. Once the correct number is reached, the program should print "Number of tries needed:" followed by a new line and the integer number of tries that it took the guesser.

Example
Input
10
5 15 8 12 11 10

Output
it is more
it is less
it is more
it is less
it is less
Number of tries needed:
6

Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.
*/
