/* A program that prints out digits from a segmented clock */
#include <stdio.h>
#include <windows.h> // uses Sleep() function in milliseconds

void SegmentDigits(int number) {
    /* The digits of the segments */
    switch (number)
    {
    case 0:
        printf(" --- \n");
        printf("|   |\n");
        printf("|   |\n");
        printf("|   |\n");
        printf(" --- \n");
        break;
    case 1:
        printf("    |\n");
        printf("    |\n");
        printf("    |\n");
        printf("    |\n");
        printf("    |\n");
        break;
    case 2:
        printf(" --- \n");
        printf("    |\n");
        printf(" --- \n");
        printf("|    \n");
        printf(" --- \n");
        break;
    case 3:
        printf(" --- \n");
        printf("    |\n");
        printf(" --- \n");
        printf("    |\n");
        printf(" --- \n");
        break;
    case 4:
        printf("|   |\n");
        printf("|   |\n");
        printf(" ---|\n");
        printf("    |\n");
        printf("    |\n");
        break;
    case 5:
        printf(" --- \n");
        printf("|    \n");
        printf(" --- \n");
        printf("    |\n");
        printf(" --- \n");
        break;
    case 6:
        printf(" --- \n");
        printf("|    \n");
        printf(" --- \n");
        printf("|   |\n");
        printf(" --- \n");
        break;
    case 7:
        printf(" ___ \n");
        printf("    |\n");
        printf("    |\n");
        printf("    |\n");
        printf("    |\n");
        break;
    case 8:
        printf(" --- \n");
        printf("|   |\n");
        printf(" --- \n");
        printf("|   |\n");
        printf(" --- \n");
        break;
    case 9:
        printf(" --- \n");
        printf("|   |\n");
        printf(" --- \n");
        printf("    |\n");
        printf(" --- \n");
        break;
    default:
        break;
    }
}

int main() {
    int i = 0,
        max = 9,
        milliseconds = 1500; // 1000 ms = 1 s

    while (1) {  // loops digits forever
        system("cls");
        SegmentDigits(i);
        printf("\n");
        Sleep(milliseconds); 
        if(i == 9) // starts over from 0, if i = 9
            i = -1;
        i++;
    }
        
    return 0;
}