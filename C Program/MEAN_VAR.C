#include<stdio.h>
#include<math.h>
main()
{
 int n=8,i,x[8];
 float sum,mean,dev2,var,sd;
 printf("enter the value :\n");
 for(i=0;i<8;i++)
 {
   scanf("%d",&x[i]);
   sum=sum+x[i];
 }
   mean=sum/n;
   for(i=0;i<8;i++)
 {
   dev2=dev2+pow((x[i]-mean),2);
 }
  var=dev2/(n-1);
  sd=sqrt(var);
  printf("mean=%f dev2=%f var=%f sd=%f",mean,dev2,var,sd);
  return 0;
}