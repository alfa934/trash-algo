#include <stdio.h>

void Sepertator(int width) {
    for(int i = 0; i < width; i++) {
        printf("*  ");
    }
    printf("\n");
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

    Sepertator(WIDTH);
    for(int i = 1; i < HEIGHT - 1; i++) {
        printf("*  ");
        for (int j = 1; j < WIDTH - 1; j++) {
            printf("   ");
        }
        printf("*\n");
    }
    Sepertator(WIDTH);
    return 0;
}