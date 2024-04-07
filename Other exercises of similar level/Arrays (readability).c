
#include <stdio.h>
#include <string.h> //sizeof function
#include <ctype.h> //isalpha isspace functions
 
int countLetters (char *);
int countWords (char *);
int countSentences (char *);
float calculateIndex (int, int, int);

int main() {
    // Prompt the user for some text
    char text[1000];
    printf("Enter your text:\n");
    fgets(text, (sizeof(text) - 1), stdin);
    //appends \0 to the strings end, has buffer overflow protecrion, therefore safer

    // Count the number of letters, words, and sentences in the text
    int letters = countLetters(text);
    int words = countWords(text);
    int sentences = countSentences(text);

    // Compute the Coleman-Liau index
    float index = calculateIndex(letters, words, sentences);

    // Print the grade level
    int grade = (int)index;
    if (grade <= 1) {
        printf("Before Grade 1\n");
    } else if (grade >= 16) {
        printf("Grade 16+\n");
    } else if (grade == NULL) {
        printf("Error... ");
    } else {
        printf("Grade %d", grade);
    }

    return 0;
}


int countLetters(char *word) {
    int count = 0;
    for (int i=0; word[i] != '\0'; i++) {
    	    if (isalpha(word[i])) {
    	        count ++;
    	    }
    	}
    return count;
}

int count_words(char *word) {
	   int count = 0;
    for (int i=0; word[i] != '\0'; i++) {
    	    if (isspace(word[i])) {
    	        count ++;
    	    }
    	}
    	return count;
}

int countSentences(char *text) {
    int count = 0;
    for (int i=0; text[i] != '\0'; i++) {
    	    if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            count++;
    	    }
    	}
    	return count;
}

float calculateIndex(int letters, int words, int sentences); {
    int index = 0;
    for (int i=0; text[i] != '\0'; i++) {
    	    
        
    	}
    return 0.0588 * L - 0.296 * S - 15.8;
}

/*
L is the average number of letters per 100 words in the text,
S is the average number of sentences per 100 words in the text
*/



// Language:C 
// Copy the full code and open the CCoder APP to run it. 
// CCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.ccoding 
