#include <stdio.h>
#include <string.h>

int main() {
	char password[] = "just_F0r_Code";
	int hasUpperCase = 0,
		hasLowerCase = 0,
		hasNumbers   = 0,
		length = strlen(password);
	
	for(int i = 0; i < length; i++) {
		if(password[i] >= 'A' && password[i] <= 'Z')
			hasUpperCase++;
		if(password[i] >= 'a' && password[i] <= 'z')
			hasLowerCase++;
		if(password[i] >= '0' && password[i] <= '9')
			hasNumbers++;
	}
	
	if(hasUpperCase && hasLowerCase && hasNumbers)
		printf("Passed Validation! \n");
	else 
		printf("Failed Validation! \n");
	return 0;
}
