
#include <stdio.h>
#include <string.h>
 
int countLetters (char *);
int countWords (char *);
int countSentences (char *);
float calculateIndex (int, int, int);

int main() {
    // Prompt the user for some text
    char text[1000];
    printf("Enter your text:\n");
    scanf("%s", text);

    // Count the number of letters, words, and sentences in the text
    int letters = countLetters(text);
    int words = countWords(text);
    int sentences = countSentences(text);

    // Compute the Coleman-Liau index
    float index = calculateindex(letters, words, sentences);

    // Print the grade level
    int grade = (int)index;
    if () {

    } else if () {

    } else if () {
    } else {
      printf("Error\n");
    }

    return 0;
}


int countLetters(char *text) {
    int count = 0;


    return count;
}

int count_words(char *word) {
}

int countSentences(char *text) {}

float calculateIndex(int, int, int); {}


