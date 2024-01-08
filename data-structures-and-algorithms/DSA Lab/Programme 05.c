#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

float calculateMean(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return (float)sum / size;
}

float calculateMedian(int arr[], int size) {
    if (size % 2 == 0) {
        return (float)(arr[size / 2 - 1] + arr[size / 2]) / 2;
    } else {
        return arr[size / 2];
    }
}

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

    qsort(arr, size, sizeof(int), compare);

    printf("Mean: %.2f\n", calculateMean(arr, size));
    printf("Median: %.2f\n", calculateMedian(arr, size));

    return 0;
}




//Output:
//Enter the size of the array: 6
//Enter 6 numbers:
//Element 1: 10
//Element 2: 2
//Element 3: 30
//Element 4: 40
//Element 5: 50
//Element 6: 60
//Mean: 32.00
//Median: 35.00
