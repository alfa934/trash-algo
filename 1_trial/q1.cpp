#include <bits/stdc++.h>

using namespace std;

string input;
char result[255];

void solve() {
	getline(cin >> ws, input);
    int length = input.length();

	int counter = 0;
	for(int i = 0; i < length; i++) {
		if(input[i] >= 'a' && input[i] <= 'z') {
			result[counter] = input[i];
			counter++;
		}
	}

	for(int i = 0; i <counter; i++) {
			printf("%c", result[i]);
	}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

	int t, num = 1;
	cin >> t;
	
	while(t--) {
		cout << "Case #" << num << ": ";
		solve();
		printf("\n");
        num++;
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
