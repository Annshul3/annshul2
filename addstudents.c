#include <stdio.h>
int students = 10;
int rollno[10];
int scores[10][3][3];
int subject = 3;
int test = 3;

void addstudents()
{
    int subject = 3;
    int test = 3;
    for (int i = 0; i < students; i++)
    {
        printf("Enter roll no of student:");
        scanf("%d", &rollno[i]);
        for (int s = 0; s < subject; s++)
        {
            for (int t = 0; t < test; t++)
            {
                printf("Enter the marks of the student %d in subject%d in test%d:", rollno[i], s + 1, t + 1);
                scanf("%d", &scores[i][s][t]);
            }
            printf("\n");
        }
    }
}
