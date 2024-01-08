#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int searchValue;
    printf("Enter the value to search: ");
    scanf("%d", &searchValue);

    int found = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == searchValue) {
            found = 1;
            break; 
        }
    }

    if (found) {
        printf("%d found in the array.\n", searchValue);
    } else {
        printf("%d not found in the array.\n", searchValue);
    }

    return 0;
}



//Output:
//Enter the size of the array: 5
//Enter 5 numbers:
//Element 1: 1
//Element 2: 2
//Element 3: 3
//Element 4: 4
//Element 5: 5
//Enter the value to search: 2
//2 found in the array.
