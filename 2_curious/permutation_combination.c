#include <stdio.h>

int factorial(int max) {
    int total = 1;
    for(int i = 1; i <= max; i++) {
        total *= i;
    }

    return total;
}

int main() {
    int n = 3,
        r = 2,
        combination = factorial(n)/(factorial(n-r)*factorial(r)),
        permutation = factorial(n)/factorial(n-r);
    printf("Combination : %d C %d is %d \n", n, r, combination);
    printf("Permutation : %d P %d is %d \n", n, r, permutation);
    return 0;

}
