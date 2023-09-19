 #include<stdio.h>
 #include<math.h>
 #include<conio.h>
 main()
 {
 int sum,tsum=0;
 int tstudent,tsubject,i,j,k,marks[3][3];
  char name[3][100];
 clrscr();
 printf("enter the total no of student:");
 scanf("%d",&tstudent);
 printf("enter the total no of subject:");
 scanf("%d",&tsubject);


 for(i=0;i<tstudent;i++)
 {
 printf("enter the name of student %d:" ,i+1);
 scanf("%s",&name[i]);

  for(j=0;j<tsubject;j++)
 {
 printf("enter the marks of subject %d:" ,j+1);
 scanf("%d",&marks[i][j]);
 }
 }
  for(k=0;k<3;k++)
 {

  for(i=0;i<tstudent;i++)
 {
   sum=0;
  for(j=0;j<tsubject;j++)
 {

 sum+=marks[i][j];
}
 printf("the average of %s is %f\n",name[k],(float)sum/tsubject);

 }}

  for(i=0;i<tstudent;i++)
 {
   for(j=0;j<tsubject;j++)
 {
 tsum+=marks[i][j];
 }
 }
 printf("average student is %.2f\n",(float)sum/(tstudent*tsubject));

 return 0;
 }