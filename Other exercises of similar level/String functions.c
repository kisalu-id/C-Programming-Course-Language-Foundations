#include <stdio.h>
#include <string.h>

void print1stLetter (char []);
void compare (char [], char []);
    
int main()
{
    char nameExample[50] = "Name ";
    char surnameExample[50] = "Surname";
    char name[50];
    
    printf("Input example:\n");
    strcat(nameExample, surnameExample); //strcat concatenates 2 strings
    puts(nameExample); //print the string
    
    printf("\nEnter your name:\n");
    fgets(name, sizeof(name), stdin); //stdin for input stream, read a line of string; advantage - can take space as input for the string
    

    print1stLetter (name);
    
    printf("\nYour name lenght with spaces is %zu\n", (strlen(name) -1)); 

    
    char namecopy[strlen(name)]; //create string with dynamic length
    strcpy(namecopy, name); //copy 2ns to 1st
    printf("\nCopied name:\n");
    puts(namecopy);
    
    printf("Comparing if copied correctly...\n");
    compare(namecopy, name);
    
    printf("\nComparing to given example...\n");
    compare(nameExample, name);
    
    return 0;
}

void print1stLetter (char name[]) {
    //can acess characters of string
    printf("First letter of your name is %c\n", name[0]);
}

void compare (char a[], char b[]) {
    int result = strcmp(a, b);
    if (result == 0) {
        printf("These strings:\n%s and\n%sare equal.\n", a, b);
    } else {
        printf("These strings:\n%s and\n%sare not equal.\n", a, b);
    }
}
