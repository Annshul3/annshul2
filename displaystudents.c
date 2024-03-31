#include <stdio.h>
int students = 10;
int rollno[10];
int scores[10][3][3];
int subject = 3;
int test = 3;

void displaystudents()
{
    printf("Student details:\n");
    for (int i = 1; i <= students; i++)
    {
        printf("Student %d:\n", rollno[i]);
        printf("\t\ttest1\t\ttest2\t\ttest3\n");
        for (int s = 0; s < subject; s++)
        {
            for (int t = 0; t < test; t++)
            {
                printf("\t\t%d", scores[i][s][t]);
            }
            printf("\n");
        }
    }
}