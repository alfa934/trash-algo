#include <stdio.h>
#include <string.h>

int height = 10, width = 25, cnt = 0; // change dimension of output

void Seperator() {
	for(int i = 0; i < width; i++) {
		if(i == 0 || i == width - 1) {
			printf("+");
		} else
			printf("-"); 
	}
	printf("\n"); 
}

void PrintLetters() {
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int strLength = strlen(letters);

	for(int i = 0; i < width - 2; i++) {
		if(cnt == strLength) {
			cnt = 0;
		}
		printf("%c", letters[cnt]);
		cnt++;
	}
}

int main() {
	/* print top line */
	Seperator();
	
	/* print middle */
	for(int i = 0; i < height - 2; i++) 
	{
		printf("|");
		PrintLetters();
		printf("|\n");
	}
	
	/* print bottom line */
	Seperator();

	return 0;
}