#include <stdio.h>

#define MAX_CHAR 50
#define HEIGHT 5
#define WIDTH 3

int main() {
    char arr[HEIGHT][WIDTH][MAX_CHAR] = { // 3D character matrix
    {"Rat","Bat","Spider"},
    {"Goblin","Orc","Drawf"},
    {"Dragon","Lich","Banshee"},
    {"Demon","Hydra","GiantSpider"},
    {"Dogs", "Cats", "Horses"}
 };

    printf("%-17s %-17s %-17s \n", "[NAME]", "[ANIMAL]", "[GENDER]");
    printf("------------------------------------------------\n");
    for(int i = 0; i < HEIGHT; i++) {
        for(int j = 0; j < WIDTH; j++) {
            printf(" %-17s", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
