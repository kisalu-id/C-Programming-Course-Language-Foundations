#include <stdio.h>
int main(void) {
    //ints for loops
    int i = 0;
    int t = 0;
    int l = 0;
    int j = 0;
    int nbWords = 0;
    char word[101]; //word itself
    int length = 0; //length of the word
    int answer = 0; //do I need that?
    scanf("%d", &nbWords);
    //big loop
    for (i=0; i<nbWords; i++) {
        scanf("%s", word);
        while (word[i] != '\0') {
            length++;
        }
        printf("%d", length);
        
    }
    
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
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.*/
