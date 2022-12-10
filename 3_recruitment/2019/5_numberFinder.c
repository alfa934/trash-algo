#include <stdio.h>

int main() {
	char string[] = "_41_0V3_14";
	int counter[10] = {0};
	int maxNumber = 0;
	
	for(int i = 0; string[i] != '\0'; i++) {
		if(string[i] >= '0' && string[i] <= '9') {
			counter[string[i] - 48]++;
			if(maxNumber < (string[i] - 48)) {
				maxNumber = string[i] - 48;
			}
		}
			
	}
	
	for(int i = 0; i <= maxNumber; i++) {
		printf("%d ", counter[i]);
	}
	
	return 0;
}
