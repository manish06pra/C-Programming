#include <stdio.h>
#include <stdlib.h>

int main()
{
float m1,m2,m3,total,average;
printf("Enter marks of three subject=");
scanf("%f%f%f",&m1,&m2,&m3);
total=m1+m2+m3;
average=total/3.0;
printf("Total Marks=%.2f\n",total);
printf("Average Marks=%.2f\n",average);
if(average>=90)
printf("Grade=A\n");
else if(average>=80)
printf("Grade=B\n");
else if(average>=70)
printf("Grade=C\n");
else  if(average>=60)
printf("Grade=D\n");
else if(average>=50)
printf("Grade=E\n");
if(m1<50||m2<50||m3<50)
{
printf("The student has FAILED");
}
else
{
printf("The student has PASSED");
}
return 0;
}

