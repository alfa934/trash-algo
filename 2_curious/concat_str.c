#include <stdio.h>
#include <string.h>

int main() {
    char concatStr[255],
        str1[] = "Hello ",
        str2[] = "world! \n";

    /* Copies string 1 to a temporary buffer */
    strcpy(concatStr, str1);
    /* Combines with string 2 */
    strcat(concatStr, str2);
    /* Prints combined strings */
    printf("%s", concatStr);
    
    return 0;
}
