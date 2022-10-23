#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

	int t, num = 1;
	cin >> t;
	
	while(t--) {
		string input;
		char result[255];
		getline(cin >> ws, input);
        int length = input.length();

        int counter = 0;
		for(int i = 0; i < length; i++) {
            if(input[i] >= 'a' && input[i] <= 'z') {
                result[counter] = input[i];
                counter++;
            }
		}
		cout << "Case #" << num << ": " << result << endl;
        num++;
	}

	return 0;
}

/* INPUTS
3
november 22nd 1919
n$e ve#- rg%&on$ n#ag i've y&o u:up-
i don't wanna be you anymore

OUTPUTS
Case #1: novembernd
Case #2: nevergonnagiveyouup
Case #3: idontwannbeyouanymore
*/
