#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{

int i,n=15;
float sxy,sxx,syy,varx,vary,corr,b0,b1,meanx,meany,x[15],y[15],sumx,sumy,a[15],b[15];
clrscr();


for(i=0;i<15;i++)
{
scanf("%f%f",&x[i],&y[i]);
sumx+=x[i];
sumy+=y[i];
}
meanx=sumx/(float)n;
meany=sumy/(float)n;


for(i=0;i<15;i++)
{
a[i]=x[i]-meanx;
b[i]=y[i]-meany;
sxy+=(a[i]*b[i]);
sxx+=pow(a[i],2);
syy+=pow(b[i],2);
}

varx=sxx/(float)(n-1);
vary=syy/(float)(n-1);
corr=sxy/(sqrt(sxx*syy));
b1=sxy/sxx;
b0=meany-(b1*meanx);
printf("meanx=%f\n meany=%f\n",meanx,meany);
printf("b0=%f\nb1=%f\nvarx=%f\nvar2=%f\ncorr=%f\n",b0,b1,varx,vary,corr);
printf("Regression line:\nY=%f+%fX\n",b0,b1);
return 0;
}