#include <stdio.h>
int main () {
    int i, times;
    char word[101]; 
    scanf("%d %s", &times, word);
    for (i=0; i<times; i++) {
        printf("%s\n", word);
    }
    return 0;
}

/*
Write a C-program that prints out a word as many times as specified. The number of repetitions and the word should be given as input to the program. You may assume that the word has no more than 100 characters (be sure to also reserve space for the null terminator, \0, though!).

Examples
Input:
2 Hello
Output:
Hello
Hello

Input:
4 thing
Output:
thing
thing
thing
thing
 
Note
You may submit as many solutions as you wish. Only your highest score will be kept.
*/
