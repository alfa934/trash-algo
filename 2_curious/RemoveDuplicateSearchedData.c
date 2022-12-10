#include <stdio.h>

int RemoveDuplicate(int array[], 
                    int result[], 
                    int arraySize, 
                    int search, 
                    int targetAmount) 
{
    int index = 0;
    int erasedData = 1;
    for(int i = 0; i < arraySize; i++) {
        if(array[i] == search && (erasedData < targetAmount)) {
            erasedData++;
        } else {
            result[index] = array[i];
            index++;
        }
    }
    return index;
}

int main()
{
    int array[] = {1, 3, 2, 4, 5, 6, 1, 1, 5, 1, 4, 2},
     arraySize  = sizeof(array)/sizeof(*array),
     result[arraySize],
     search;
     
    printf("Enter Target: "); scanf("%d", &search);
    
    /* Count amount of TARGET in input array */
    int targetAmount = 0;
    for(int i = 0; i < arraySize; i++) {
        if(array[i] == search) 
            targetAmount++;
    }
    
    /* remove duplicate target until only 1 is left */
    if(targetAmount > 1) {

        int index = RemoveDuplicate(array, 
                                    result, 
                                    arraySize, 
                                    search, 
                                    targetAmount);

        printf("Duplicate data erased for '%d' \n", search);
        printf("Result: ");
        for(int i = 0; i < index; i++) 
            printf("%d ", result[i]);

    } else {

        printf("No duplicate data for '%d' \n", search);
        printf("Result: ");
        for(int i = 0; i < arraySize; i++) 
            printf("%d ", array[i]);

    }
    return 0;
}