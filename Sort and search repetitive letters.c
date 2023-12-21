#include <stdio.h>
int main () {
    int i = 0;
    int  counter = 0;
    int j, length;
    char temp;
    char word[51];
    
    scanf("%s", word);
    
    //find out the length of a word
    while (word[i] != '\0') {
        i++;
        length = i;
    }
    //printf("%d\n", length);
    
    //sort the letters of the word alphabetically, smallest to largest
    for (j=0; j<length-1; j++) {
        for (i=0; i<length-1; i++) {
            if(word[i] > word[i+1]) {
            temp = word[i];
            word[i] = word[i+1];
            word[i+1] = temp;
            }
        }
    }
    
    /* //see sorted array
    for (i=0; i<length; i++) {
      printf("%c", word[i]); } */
    
    /*iterate through the letters of the word and compare each letter with the one following it.
    If these equal each other, you increase a counter by 1, making sure to then skip ahead*/
    for (i=0; i<length; i++) {
        if ((word[i] == word[i+1]) && (word[i+1] != word[i+2])) {
            counter++;
        }
    }
    printf("\n%d\n", counter);
    return 0;
}

/*
You are still conducting linguistic research! This time, you'd like to write a program to find out how many letters occur multiple times in a given word. Your program should read a word from the input and then sort the letters of the word alphabetically (by their ASCII codes). Next, your program should iterate through the letters of the word and compare each letter with the one following it. If these equal each other, you increase a counter by 1, making sure to then skip ahead far enough so that letters that occur more than twice are not counted again. You may assume that the word you read from the input has no more than 50 letters, and that the word is all lowercase.

Examples
Input:
apple
Output:
1

Input:
keeper
Output:
1

Input:
erroneousnesses
Output:
5
 
Input:
taylor
Output:
0

Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.
*/
