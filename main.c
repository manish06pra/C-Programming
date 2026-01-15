#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
char s1[100],s2[100];
printf("Enter two strings: \n");
scanf("%s %s",&s1,&s2);
strcat(s1,s2);
printf("Result= %s",s1);
return 0;
}
