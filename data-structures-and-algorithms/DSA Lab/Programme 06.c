#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size + 1]; 
    int newElement, position;

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the new element to be inserted: ");
    scanf("%d", &newElement);

    printf("Enter the position of insertion (1 to %d): ", size + 1);
    scanf("%d", &position);

    if (position < 1 || position > size + 1) {
        printf("Invalid position of insertion.\n");
        return 1;  
    }

    for (int i = size; i >= position; --i) {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = newElement;

  printf("\nArray after insertion at position %d:\n", position);
    for (int i = 0; i <= size; ++i) {
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
// Enter the new element to be inserted: 39
// Enter the position of insertion (1 to 7): 4

// Array after insertion at position 4:
// 12 23 34 39 45 56 67 
