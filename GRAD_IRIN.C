 #include<stdio.h>
 #include<math.h>
 #include<conio.h>
 main()
 {
 int marks;
 clrscr();
 printf("enter the mark;\n");
 scanf("%d",&marks);
 switch(marks/5)
 {
 case 20:
 case 19:
 case 18:
 case 17:
 case 16:
 printf("your grade is A+");
 break;
 case 15:
 printf("your grade is A");
 break;
 case 14:
 printf("your grade is A-");
 break;
 case 13:
 printf("your grade is B+");
 break;
 case 12:
 printf("your grade is B");
 break;
 case 11:
 printf("your grade is B-");
 break;
 case 10:
 printf("your grade is C+");
 break;
 case 9:
 printf("your grade is C");
 break;
 case 8:
 printf("your grade is D");
 break;

 default:
 printf("your grade is F");
 break;
 }
 return 0;
 }

