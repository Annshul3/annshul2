#include <stdio.h>
#include <stdlib.h>
#include "functions2.h"

void addStudents2(struct Student *students, int numStudents, int numSubjects, int numTests) {
    for (int i = 0; i < numStudents; i++) {
        printf("Enter roll no of student %d: ", i + 1);
        scanf("%d", &students[i].rollno);

        students[i].name = malloc(MAX_NAME_LENGTH * sizeof(char));
        if (students[i].name == NULL) {
            printf("Memory allocation failed for student name.\n");
            exit(1);
        }

        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter scores for student %d (3 subjects, 3 tests):\n", i + 1);
        for (int s = 0; s < numSubjects; s++) {
            for (int t = 0; t < numTests; t++) {
                printf("Enter score for subject %d, test %d: ", s + 1, t + 1);
                scanf("%d", &students[i].scores[s][t]);
            }
        }
    }
}
