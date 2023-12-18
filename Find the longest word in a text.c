#include <stdio.h>
int main(void) {
    int i;
    int nbWords;
    char word[101]; //word itself
    int length = 0; //length of the word from user input
    int answer = 0;
    scanf("%d", &nbWords);
    //big loop
    //find out length
    for (i=0; i<nbWords; i++) {
        scanf("%s", word);
        while (word[length] != '\0') {
            length++;
        }
        //assign the biggest lenghts of all words as answer
        if (length>answer) {
            answer = length;
        }
    }
    printf("%d\n", answer);
    return 0;   
}
/*
Your job is to find the length of the longest word in a text with no punctuation or special characters of any kind - only contains words. To do so, please write a C-program that takes as a input first the number of words in a text, followed by all of the words in the text. The output of your program should be the length of the longest word in the text.
To simplify your program, you can assume that the longest word will not exceed 100 characters.

Examples
Input:
14
This is a simple example text
we have to find the largest word length
Output:
7

Input:
7
All cats are grey in the dark
Output:
4
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.
*/
