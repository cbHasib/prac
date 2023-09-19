#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
int i,j,k;
int A[3][3],B[3][3],sum[3][3];
clrscr();


printf("enter the matrix A:\n");
for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 scanf("%d",&A[i][j]);
 }}


printf("enter the matrix B:\n");
  for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 scanf("%d",&B[i][j]);
}}


  for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 sum[i][j]=0;
 for(k=0;k<3;k++)
 {
 sum[i][j]+=A[i][k]*B[k][j];
 }}}


printf("enter the matrix sum:\n");
for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 printf("%d\t",sum[i][j]);
 }
 printf("\n");
 }
 return 0;
 }