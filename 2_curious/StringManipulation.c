#include <stdio.h>
#include <ctype.h>
#include <string.h>

const char *UpperString(char string[]) {
    for(int i = 0; string[i] != '\0' ; i++) 
    {
        string[i] = toupper(string[i]);
    }
    return string;
}

const char *LowerString(char string[]) {
    for(int i = 0; string[i] != '\0' ; i++) 
    {
        string[i] = tolower(string[i]);
    }
    return string;
}

const char *TitleString(char string[]) {
    /* Lowers all characters first */
    for(int i = 0; string[i] != '\0' ; i++) 
    {
        string[i] = tolower(string[i]);
    }
    /* Uppers first letter of each word */
    for(int i = 0; string[i] != '\0' ; i++) 
    {
        if(i == 0 || string[i - 1] == ' ') 
        {
            string[i] = toupper(string[i]);
        }
    }
    return string;
}

int main() {
    char string[50]; 
    char upper[50], lower[50], title[50]; 

    printf("Enter String: ");
    gets(string);

    strcpy(upper, UpperString(string));
    strcpy(lower, LowerString(string));
    strcpy(title, TitleString(string));

    printf("%s \n", upper);
    printf("%s \n", lower);
    printf("%s \n", title);

    return 0;
}