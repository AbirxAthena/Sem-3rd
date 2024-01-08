#include <stdio.h>

int main() {
    int numbers[10];

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += numbers[i];
    }

    printf("\nSum of the numbers: %d\n", sum);

    return 0;
}



//Output:
//Enter 10 numbers:
//Number 1: 1
//Number 2: 2
//Number 3: 3
//Number 4: 4
//Number 5: 5
//Number 6: 6
//Number 7: 7
//Number 8: 8
//Number 9: 9
//Number 10: 10

//Sum of the numbers: 55
