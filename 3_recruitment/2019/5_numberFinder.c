#include <stdio.h>

int main() {
	char string[] = "_41_0V3_14";
	int counter[10] = {0};
	int maxIndex = 0;
	
	for(int i = 0; string[i] != '\0'; i++) {
		if(string[i] >= '0' && string[i] <= '9') {
			int index = string[i] - 48;
			counter[index]++;
			if(maxIndex < index) {
				maxIndex = index;
			}
		}
			
	}
	
	for(int i = 0; i <= maxIndex; i++) {
		printf("%d ", counter[i]);
	}
	
	return 0;
}
