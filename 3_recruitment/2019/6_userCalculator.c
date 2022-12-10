#include <stdio.h>

int main() {
	int t;
	scanf("%d", &t); 
	
	while(t--) {
		getchar();
		char num1, num2, operation;
		float NUM1, NUM2;
		scanf("%c%c%c", &num1, &operation, &num2);
		num1 -= 48;
		num2 -= 48;
		
		switch(operation) {
			case '+':
				printf("%d \n", num1 + num2);
				break;
			case '-':
				printf("%d \n", num1 - num2);
				break;
			case '*':
				printf("%d \n", num1 * num2);
				break;
			case '/':
				NUM1 = (float)num1;
				NUM2 = (float)num2;
				if(num2 == 0) {
					printf("Invalid 2nd number! \n");
				} else {
					printf("%.2f \n", NUM1 / NUM2);
				}
				break;
			default:
				printf("INVALID \n");
		}
	}
}
