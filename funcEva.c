// . Write a C program that will read the value of x and evaluate the following function
// 1 for x > 0
// 0 for x = 0 -1 for x <0 y =
// Using
// (a) nested if statements
// (b) Conditional operator ?:

// Ans : (a) nested if statements
#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the value of x : ");
    scanf("%d", &x);
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
    printf("The value of y is : %d", y);
    return 0;
}

// Ans : (b) Conditional operator ?:
#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    y = (x > 0) ? 1 : (x == 0) ? 0 : -1;
    printf("The value of y is : %d", y);
    return 0;
}