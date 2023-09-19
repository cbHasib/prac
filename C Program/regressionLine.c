// A car dealer wants to find the relationship between the odometer reading and the selling price of used cars. The dealer selects a random sample of 15 cars and records the odometer reading and the selling price. The data are given below. Find the regression line and interpret your results. (x = selling price, y = odometer reading)

// Write a C program to find the regression line and interpret your results.

#include <stdio.h>
#include <math.h>
int main() {
    int n, i;
    double x[100], y[100], sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0, a, b;
    printf("Enter the number of data points: ");
    scanf("%d", &n);
    printf("Enter the data points x and y: \n");
    for (i = 0; i < n; i++) {
        scanf("%lf %lf", &x[i], &y[i]);
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i]*y[i];
        sum_x2 += x[i]*x[i];
    }
    a = (n*sum_xy - sum_x*sum_y)/(n*sum_x2 - sum_x*sum_x);
    b = (sum_y - a*sum_x)/n;
    printf("The regression coefficients are a = %.2f and b = %.2f\n", a, b);
    printf("The regression line is y = %.2fx + %.2f\n", a, b);
    printf("The interpretation of the regression line is that for every increase of 1 unit in x, y increases by %.2f units\n", a);
    return 0;
}