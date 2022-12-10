#include <stdio.h>
#include <string.h>

int main() {
	char sentence[] = "sir i demand i am a maid named iris";
	const int length = strlen(sentence);
	char result[length];
	
	// removes spaces
	for(int i = 0; i < length; i++) {
		for(int j = 0; j < length - 1; j++) {
			if(sentence[j] == ' ') {
				char temp = sentence[j + 1];
				sentence[j + 1] = sentence[j];
				sentence[j] = temp;
			}
		}
	}
	
	// copies to new array backwards
	int spaces = 0;
	for(int i = 0; i < length; i++) {
		result[i] = sentence[length - i - 1];
		if(result[i] == ' ') {
			spaces++;
		}
	}
	
	// checks equality of string
	int same = 0;
	for(int i = 0; i < length; i++) {
		if(result[i+spaces] == sentence[i]) {
			same++;
		}
	}
	same += spaces; 
	
	if(same == length) {
		printf("Palindrome! \n");
	} else {
		printf("Not a Palindrome! \n");
	}
	return 0;
}
