// Find  out the value of x1 and x2 in the equation ax^2+bx+c=0
// using the formula x1 = (-b+sqrt(b^2-4ac))/2a and x2 = (-b-sqrt(b^2-4ac))/2a
// where a, b and c are the coefficients of the equation
#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, x1, x2, det;
    printf("Enter the coefficients of the equation ax^2+bx+c=0: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    det = b*b - 4*a*c;
    if (det < 0) {
        printf("The equation has no real roots\n");
    } else if (det == 0) {
        x1 = -b/(2*a);
        printf("The equation has one real root: x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(det))/(2*a);
        x2 = (-b - sqrt(det))/(2*a);
        printf("The equation has two real roots: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
    return 0;
}