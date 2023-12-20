#include <stdio.h>
int main(void) {
    int middle;
    int counter = 0;
    int length = 0;
    int found = 0; //bool
    char word[101];
    
    scanf("%s", word);

    //find out length of word
    while (word[length] != '\0') {
        length++;
    }

    middle = length / 2;
    //printf("middle default %d\n", middle);

    //odd or even number: in case of odd I made it work
    if (length % 2 == 1) {
        middle++;
    //printf("middle updated %d\n", middle);
    }

    //found or not? if no, continue counting
    while (!found && counter < length) {
        if (word[counter] == 't' || word[counter] == 'T') {
            found++;
        } else {
            counter++;
        }
    }
    
    //print answer depending if || where I found t
    if(!found) {
        printf("-1\n");
    }
    
    if (found) {
        if (counter <= middle) {
            printf("1\n");
        } else {
            printf("2\n");
        }
    }
    
    return 0;

/*
Note: I honestly liked the structure of 1st version more, despite it being (arguably) unnecessary. It showed how much "t"s are in there; and if I input "ttt" it'd output 112 buuuut the statement wants what I wrote in ver.2 so here we are--

Statement
You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' in the first half of the word (including the middle letter if there is one). Specifically, if the first half of the word does contain a 't' or a 'T', your program should output a 1. If the first half does not contain the letter 't' or 'T', but the second half does, then your program should output a 2. Otherwise, if there is no 't' or 'T' in the word at all, your program's output should be -1. You may assume that the word entered does not have more than 50 letters.

Examples
Input:
apple
Output:
-1

Input:
raincoat
Output:
2
 
Input:
enter
Output:
1

Input:
Taylor
Output:
1

Warning: You will be graded on your output, so do not include any print statements that prompt a user for input.*/
