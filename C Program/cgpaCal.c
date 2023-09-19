// A class of students earned the following marks for the three examinations taken in a C programming course.

/*
Name
75
84
80 75
Mustafiz
83
58
Aslam
69
83
76
77
Ikbal
76
72
82
87
Mashrafi Saqibul
76
Write an interactive C program that will accept each student's name and examination marks as input, determine the average mark of each student, and then display the student's name and the calculated average mark of individual student
*/


// Write an interactive C program that will accept each student's name and examination marks as input, determine the average mark of each student, and then display the student's name and the calculated average mark of individual student

#include <stdio.h>
#include <math.h>
int main() {
    // write the proram here (Each student have 3 subject) (calculate the average of each student and display the student's name and the calculated average mark of individual student - also for all)
// Show the output at the end (each avaerage and total average of all student)
    int totalStudent, totalSubject, i, j;
    printf("Enter the total number of student: ");
    scanf("%d", &totalStudent);
    printf("Enter the total number of subject: ");
    scanf("%d", &totalSubject);
    char name[totalStudent][100];
    int marks[totalStudent][totalSubject];
    for (i = 0; i < totalStudent; i++) {
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", name[i]);
        for (j = 0; j < totalSubject; j++) {
            printf("Enter the marks of subject %d: ", j+1);
            scanf("%d", &marks[i][j]);
        }
    }
    for (i = 0; i < totalStudent; i++) {
        int sum = 0;
        for (j = 0; j < totalSubject; j++) {
            sum += marks[i][j];
        }
        printf("The average of %s is %.2f\n", name[i], (double)sum/totalSubject);
    }
    int sum = 0;
    for (i = 0; i < totalStudent; i++) {
        for (j = 0; j < totalSubject; j++) {
            sum += marks[i][j];
        }
    }
    printf("The average of all student is %.2f\n", (double)sum/(totalStudent*totalSubject));

    return 0;

}