#include <stdio.h>

#define STRLEN(array) (sizeof(array)/sizeof(*array) - 1)

int height = 10, width = 25, cnt = 0; // change dimension of output

void Seperator() {
	printf("+");
	for(int i = 0; i < width - 2; i++) {
		printf("-"); 
	}
	printf("+\n"); 
}

void PrintLetters() {
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int strLength = STRLEN(letters);

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