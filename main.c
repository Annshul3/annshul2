#include <stdio.h>
#include "functions.h"

extern int students = 10;
extern int rollno[10];
extern int scores[10][3][3];
extern int subject = 3;
extern int test = 3;

int main()
{
    addstudents();
    displaystudents();
    calculateaverage();

    return 0;
}