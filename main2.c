#include <stdio.h>
#include <stdlib.h>
#include "functions2.h"

int main() {
    int numStudents = 10;
    int numSubjects = 3;
    int numTests = 3;

    struct Student *students = malloc(numStudents * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    addStudents2(students, numStudents, numSubjects, numTests);
    displayStudents2(students, numStudents);
    calculateAverage2(students, numStudents, numSubjects, numTests);
    freeStudents2(students, numStudents);

    return 0;
}
