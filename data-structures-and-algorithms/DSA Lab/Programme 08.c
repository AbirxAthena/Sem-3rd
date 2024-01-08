#include <stdio.h>

int main() {
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size + 1]; 
    int sorted = 0;

    printf("Enter %d numbers:\n", size);
    for (int i = 1; i <= size; ++i) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Is the array sorted? (1 for yes, 0 for no): ");
    scanf("%d", &sorted);

    if (!sorted) {
        for (int i = 1; i < size; ++i) {
            for (int j = 1; j < size - i; ++j) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        printf("\nArray after sorting:\n");
        for (int i = 1; i <= size; ++i) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int left = 1, right = size;
    int position = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            position = mid;
            break;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (position != -1) {
        printf("%d found at position %d.\n", target, position);
    } else {
        printf("%d not found in the array.\n", target);
    }

    return 0;
}





// Output:
// Enter the size of the array: 7
// Enter 7 numbers:
// Element 1: 1
// Element 2: 2
// Element 3: 3
// Element 4: 4
// Element 5: 5
// Element 6: 6
// Element 7: 7
// Is the array sorted? (1 for yes, 0 for no): 1
// Enter the element to search: 5

// 5 found at position 5.
