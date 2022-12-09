#include <stdio.h>
#include <ctype.h>
#include <string.h>

const char *upperString(char string[]) {
    for(int i = 0; string[i] != '\0' ; i++) 
    {
        string[i] = toupper(string[i]);
    }
    return string;
}

const char *lowerString(char string[]) {
    for(int i = 0; string[i] != '\0' ; i++) 
    {
        string[i] = tolower(string[i]);
    }
    return string;
}

int main() {
    char string[] = "hElLo WoRlD";
    char upper[50], lower[50]; 

    strcpy(upper, upperString(string));
    strcpy(lower, lowerString(string));

    printf("%s \n", upper);
    printf("%s \n", lower);

    return 0;
}