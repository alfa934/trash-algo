#include <stdio.h>

void Seperator(int width) {
    for(int i = 0; i < width; i++) {
        printf("*  ");
    }
    printf("\n");
}

void PrintSpaces(int width) {
    for (int j = 0; j < width - 2; j++) {
        printf("   ");
    }
}

int main() {
    // input whatever you want 👻
    int HEIGHT; 
    int WIDTH;

    printf("Enter Height: "); scanf("%d", &HEIGHT);
    printf("Enter Width : "); scanf("%d", &WIDTH);
    printf("\n");

    if(HEIGHT < 0 || WIDTH < 0) {
         printf("INVALID INPUT\n");
         return -1;
    }

    Seperator(WIDTH);

    for(int i = 0; i < HEIGHT - 2; i++) {
        printf("*  ");
        PrintSpaces(WIDTH);
        printf("*\n");
    }

    if(HEIGHT > 1)
        Seperator(WIDTH);
        
    return 0;
}