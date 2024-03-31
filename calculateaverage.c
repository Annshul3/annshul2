#include <stdio.h>
int students;
int rollno[10];
int scores[10][3][3];
int subject = 3;
int test = 3;

void calculateaverage()
{
    for (int s = 0; s < subject; s++)
    {
        int total = 0;
        int i = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int s = 0; s < 3; s++)
            {
                for (int t = 0; t < 3; t++)
                {
                    total += scores[i][s][t];
                }
            }
            float avg = total / test;
            char grade;
            if (avg >= 90)
            {
                grade = 's';
            }
            else if (avg >= 80)
            {
                grade = 'a';
            }
            else if (avg >= 70)
            {
                grade = 'b';
            }
            else if (avg >= 60)
            {
                grade = 'c';
            }
            else if (avg >= 50)
            {
                grade = 'd';
            }
            else if (avg >= 40)
            {
                grade = 'e';
            }
            else if (avg < 40)
            {
                grade = 'f';
            }
            else
            {
                grade = 'f';
            }
            printf("Student %d:\n Average=%.2f\t\t Grade=%c\n\n", i, avg, grade);
        }
    }
}