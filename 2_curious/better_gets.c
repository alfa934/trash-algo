#include <stdio.h>
#include <string.h>

#define MAX 256     // defines the max str length
#define SIZEOF(str) sizeof(str)/sizeof(*str)    // finds size of char array

void GETS(char buffer[], unsigned length) { // better gets input with fgets
    fgets(buffer, length, stdin);
    buffer[strcspn(buffer, "\n")] = '\0'; // removes \n stored by fgets, replaced with \0
}

int main() {
    char input[MAX];
    printf("ENTER : ");
    GETS(input, SIZEOF(input));
    
    // checks if GETS() works {\n removed}
    if(!strcmp(input, "hello"))
        printf("NICE \n");
    else
        printf("%s \n", input);

    return 0;
}
