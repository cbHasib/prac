// Solve matrix using c program
#include <stdio.h>
#include <math.h>

// all declaration should be top of the file (find determin )
int main(){
    int a[3][3], b[3][3], i, j, k;
    int det = 0;
    printf("Enter the elements of matrix: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    // find determin
    for(i=0; i<3; i++){
        det = det + (a[0][i] * (a[1][(i+1)%3] * a[2][(i+2)%3] - a[1][(i+2)%3] * a[2][(i+1)%3]));
    }
    printf("The determin is: %d\n", det);
    // find inverse
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            b[i][j] = ((a[(j+1)%3][(i+1)%3] * a[(j+2)%3][(i+2)%3]) - (a[(j+1)%3][(i+2)%3] * a[(j+2)%3][(i+1)%3]))/det;
        }
    }
    printf("The inverse matrix is: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}