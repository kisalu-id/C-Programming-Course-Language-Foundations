#include <stdio.h>
int main(void) {
    int middle;
    int counter = 0;
    int length = 0;
    int found = 0; //bool - do I need that?
    char word[101];
    //scan user input
    scanf("%s", word);
    
    //find out length of word
    while (word[length] != '\0') {
        length++;
    }
    //printf("length %d\n", length);
    
    //if t or T are in 1st or 2nd part
    middle = length / 2;
    //printf("middle default %d\n", middle);
    
    //odd or even
    //in case of odd - I made it work
    if (length % 2 == 1) {
        middle++;
    }
        //printf("middle updated %d\n", middle);
        
        //1st half
        while (counter < middle) {
            if (word[counter] == 't' || word[counter] == 'T') {
                printf("1\n");
                found++;
            }
            counter++;
        }
        //2nd half
        while (counter >= middle && counter < length) {
            if (word[counter] == 't' || word[counter] == 'T') {
                printf("2\n");
                found++;
            }
            counter++;
            
            //if (word[counter] == 't' || word[counter] == 'T')
            //    printf("f\n");
        } if (found == 0) {
        printf("-1\n");
        }
    return 0;
}

/*You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' in the first half of the word (including the middle letter if there is one). Specifically, if the first half of the word does contain a 't' or a 'T', your program should output a 1. If the first half does not contain the letter 't' or 'T', but the second half does, then your program should output a 2. Otherwise, if there is no 't' or 'T' in the word at all, your program's output should be -1. You may assume that the word entered does not have more than 50 letters.

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
