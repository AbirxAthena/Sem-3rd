#include <stdio.h>

int main() {
    int C, first, last, middle, n, search, array[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d Integers \n", n);

    for (C = 0; C < n; ++C) {
        printf("Enter element %d: ", C + 1);
        scanf("%d", &array[C]);
    }

    printf("Enter value to find: ");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first + last) / 2;

    while (first <= last) {
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search) {
            printf("%d found at location %d.\n", search, middle + 1);
            break;
        } else
            last = middle - 1;

        middle = (first + last) / 2;
    }

    if (first > last)
        printf("Element %d not found in the list.\n", search);

    return 0;
}






// Output:
// Enter number of elements: 5
// Enter 5 Integers 
// Enter element 1: 1
// Enter element 2: 2
// Enter element 3: 3
// Enter element 4: 5
// Enter element 5: 4
// Enter value to find: 3
// 3 found at location 3.
