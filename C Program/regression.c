// Find out regression coefficients a and b in the equation y = ax + b
// using the formula a = (n*sum(xy) - sum(x)*sum(y))/(n*sum(x^2) - (sum(x))^2)
// and b = (sum(y) - a*sum(x))/n

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
    return 0;
}