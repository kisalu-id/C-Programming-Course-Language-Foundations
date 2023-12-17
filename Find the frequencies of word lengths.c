#include <stdio.h>
int main(void) {
    //ints for loops
    int i = 0;
    int t = 0;
    int l = 0;  //counter
    int j = 0;
    int nbWords = 0;
    char word[11];
    int length[10]; //length[5] = number of 5-letter-long words in the text
    
    //make everything 0
    for(i=0;i<10;i++){
        length[i]=0;
    }
    
    scanf("%d", &nbWords);
    
    //scan each word
    for(t=0;t<nbWords;t++){
        scanf("%s", word);
        //to not overlap the results
        l = 0;
        //calculate length
        while(word[l] != '\0') {
            l++;
        }
        length[l]++;
    }
  
    //print Theres X words with Y letters
    for (j=0; j<10; j++) {
        printf("There's %d words with %d letters\n", length[j], j);
    }
    return 0;   
}

/*
Your job is to find how many words have 1, 2, 3, etc. characters

Examples
Input:
15
Do not judge a book by its cover
Cross that bridge when you get there
*/
