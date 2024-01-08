#include <stdio.h>

int main() {
    const int numStudents = 10;
    const int numCourses = 5;

    int marks[numStudents][numCourses];

    for (int i = 0; i < numStudents; ++i) {
        printf("Enter marks for student %d:\n", i + 1);

        for (int j = 0; j < numCourses; ++j) {
            printf("Course %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\nEntered Marks:\n");
    for (int i = 0; i < numStudents; ++i) {
        printf("Student %d: ", i + 1);

        for (int j = 0; j < numCourses; ++j) {
            printf("%d ", marks[i][j]);
        }

        printf("\n");
    }

    return 0;
}



// Output:
// Enter marks for student 1:
// Course 1: 10
// Course 2: 20
// Course 3: 30
// Course 4: 40
// Course 5: 50
// Enter marks for student 2:
// Course 1: 11
// Course 2: 22
// Course 3: 33
// Course 4: 44
// Course 5: 55
// Enter marks for student 3:
// Course 1: 66
// Course 2: 77
// Course 3: 88
// Course 4: 99
// Course 5: 00
// Enter marks for student 4:
// Course 1: 12
// Course 2: 23
// Course 3: 34
// Course 4: 45
// Course 5: 56
// Enter marks for student 5:
// Course 1: 65
// Course 2: 54
// Course 3: 43
// Course 4: 32
// Course 5: 21
// Enter marks for student 6:
// Course 1: 90
// Course 2: 80
// Course 3: 70
// Course 4: 60
// Course 5: 50
// Enter marks for student 7:
// Course 1: 01
// Course 2: 02
// Course 3: 03
// Course 4: 04
// Course 5: 05
// Enter marks for student 8:
// Course 1: 91
// Course 2: 82
// Course 3: 73
// Course 4: 64
// Course 5: 55
// Enter marks for student 9:
// Course 1: 12
// Course 2: 13
// Course 3: 14
// Course 4: 15
// Course 5: 16
// Enter marks for student 10:
// Course 1: 21
// Course 2: 22
// Course 3: 23
// Course 4: 24
// Course 5: 25

// Entered Marks:
// Student 1: 10 20 30 40 50 
// Student 2: 11 22 33 44 55 
// Student 3: 66 77 88 99 0 
// Student 4: 12 23 34 45 56 
// Student 5: 65 54 43 32 21 
// Student 6: 90 80 70 60 50 
// Student 7: 1 2 3 4 5 
// Student 8: 91 82 73 64 55 
// Student 9: 12 13 14 15 16 
// Student 10: 21 22 23 24 25

