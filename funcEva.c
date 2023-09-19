// . Write a C program that will read the value of x and evaluate the following function
// 1 for x > 0
// 0 for x = 0 -1 for x <0 y =
// Using
// (a) nested if statements
// (b) Conditional operator ?:

#include <stdio.h>
#include <math.h>
int main()
{
    float x, y;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    if (x > 0)
    {
        y = 1;
    }
    else if (x == 0)
    {
        y = 0;
    }
    else
    {
        y = -1;
    }
    printf("The value of y is: %f", y);
    return 0;
}
