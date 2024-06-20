#include <stdio.h>
void reverseCopy(int source[], int destination[], int size) {
    for (int i = 0; i < size; i++) {
        destination[i] = source[size - 1 - i];
    }
}
int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int sourceArray[size];
    int destinationArray[size];
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &sourceArray[i]);
    }
    reverseCopy(sourceArray, destinationArray, size);
    printf("\nOriginal Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", sourceArray[i]);
    }
    printf("\nReversed Array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", destinationArray[i]);
    }
    return 0;
}
