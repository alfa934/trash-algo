#include <stdio.h>

int main() {
	int max = 7;
	
	for(int i = 0; i < max; i++) {
		for(int j = 0; j < max; j++) {
			if(j <= i) {
				printf("%d  ", max - j);
			} else {
				printf("*  ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
