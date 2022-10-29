#include <stdio.h>  

void solve(int loop) {
	int len;
	scanf("%d", &len); getchar();
	
	char str[len+1]; 
	char result[len+1];
	scanf("%[^\n]s",str);
	
	int LEN = sizeof(str)/sizeof(str[0]);
	
	int counter = 0;
	for(int i = 0; i < LEN; i++){  
		if(str[i] >= 'a' && str[i] <= 'z'){  
			result[counter] = str[i];
			counter++;
		}  
	}  

	printf("Case #%d: ", loop);
	printf("%s \n", result);  
	
}

int main()  {  
	int t, i = 1;
	scanf("%d", &t); getchar();
	
	while(t--) {
		solve(i);
	} 
	
	return 0;  
}  
/* INPUTS
3
18
november 22nd 1919
36
n$e ve#- rg%&on$ n#ag i've y&o u:up-
28
i don't wanna be you anymore
 
OUTPUTS
Case #1: novembernd
Case #2: nevergonnagiveyouup
Case #3: idontwannbeyouanymore
*/
