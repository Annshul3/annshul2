#include <stdlib.h>
#include "functions2.h"

// Function to free dynamically allocated memory for students array
void freeStudents2(struct Student *students, int numStudents) {
    // Iterate over each student to free allocated memory for their names
    for (int i = 0; i < numStudents; i++) {
        free(students[i].name); // Free memory for name
    }
    free(students); // Free memory for the array of students
}
