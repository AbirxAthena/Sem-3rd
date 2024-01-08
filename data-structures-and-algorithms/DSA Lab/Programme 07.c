#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1; 
    }

    int arr[size];
    int positionToDelete;

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the position to delete (1 to %d): ", size);
    scanf("%d", &positionToDelete);

    if (positionToDelete < 1 || positionToDelete > size) {
        printf("Invalid position to delete.\n");
        return 1;  
    }

    for (int i = positionToDelete - 1; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    printf("\nArray after deletion at position %d:\n", positionToDelete);
    for (int i = 0; i < size - 1; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}



// Output:
// Enter the size of the array: 6
// Enter 6 numbers:
// Element 1: 12
// Element 2: 23
// Element 3: 34
// Element 4: 45
// Element 5: 56
// Element 6: 67
// Enter the position to delete (1 to 6): 5

// Array after deletion at position 5:
// 12 23 34 45 67
