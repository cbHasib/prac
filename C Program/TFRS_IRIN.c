#include<stdio.h>
int main()
{
int i;
float b[7],w[7],sumasfr=0,tfr,asfr[7];
for(i=0;i<7;i++)
{
scanf("%f%f",&b[i],&w[i]);
asfr[i]=(b[i]/w[i])*1000;
}
for(i=1;i<30;i++)
{
printf("_");
}
printf("\nage  birth  women   asfr\n");
for(i=1;i<30;i++)
{
printf("_");
}
 for(i=0;i<7;i++)
 {
 printf("\n%d %d %f %f %f",(i+3)*5,(i+3)*5+4,b[i],w[i],asfr[i]);
 }
for(i=1;i<30;i++)
{
printf("_");
}
for(i=0;i<7;i++)
{
sumasfr=sumasfr+asfr[i];
}
tfr=5*sumasfr;
printf("\ntfr=%f",tfr);
return 0;
}
