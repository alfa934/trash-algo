#include <stdio.h>

int main() {
    // input whatever you want 👻
    int HEIGHT; 
    int WIDTH;

    printf("Enter Height: "); scanf("%d", &HEIGHT);
    printf("Enter Width : "); scanf("%d", &WIDTH);
    printf("\n");

    if(!(HEIGHT < 0 || WIDTH < 0)) {

        for(int i = 0; i < HEIGHT; i++) {
            for (int j = 0; j < WIDTH; j++) {
                if(i == 0 || i == HEIGHT - 1) 
                    printf("*  ");
                else if(j == 0 || j == WIDTH - 1) 
                    printf("*  ");
                else 
                    printf("   ");
            }
            printf("\n");
        }

    } else {
        printf("INVALID INPUT\n");
    }

    return 0;
}