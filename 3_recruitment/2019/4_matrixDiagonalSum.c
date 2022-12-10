#include <stdio.h>

int main() {
	int size = 5;
	int matrix[size][size];
	
	// too lazy for user input
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			matrix[i][j] = i + 1 + j;
		}
	}
	
	int diagonalSum = 0;
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			if(i == j) {
				diagonalSum += matrix[i][j];
			}
		}
	}
	
	// display matrix
	for(int i = 0; i < size; i++) {
		for(int j = 0; j < size; j++) {
			printf("%d  ", matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("\nTotal = %d \n", diagonalSum);
	return 0;
}
