#include <stdio.h>
#include <stdlib.h>

struct marks{
int phy;
int maths;
int cs
};
struct student{
int id;
char name[20];
struct marks;
};
int main()
{
struct student s1={101,"Man"};
printf("Id: %d\n Name: %s\n ",s1.id,s1.name);
struct marks m1={90,39,44};
printf("Marks: %d %d %d\n",m1.phy,m1.maths,m1.cs);
struct student s2={102,"Aru",67,98,78};
printf("Id: %d\n Name: %s\n",s2.id,s2.name);
struct marks m2={67,98,78};
printf("Marks: %d %d %d\n",m2.phy,m2.maths,m2.cs);

return 0;
}
