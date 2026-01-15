#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
char o;
char s1[100],s2[100];
printf("Enter a number from 1-4:\n");
scanf("%d",&o);
printf("Enter two strings: \n");
scanf("%s %s",&s1,&s2);
switch(o)
{
case 1:
int result=strcmp(s1,s2);
    if(result>0)
        printf("The first string is greater than the second string\n");
    else if(result<0)
        printf("The second string is greater then the first string\n");
    else
        printf("Both the strings are equal\n");
break;
case 2:
printf("Length of string 1(s1): %lu\n Length of string 2(s2): %lu\n",strlen(s1),strlen(s2));
break;
case 3:
printf("After concatenation: %s\n",s1);
break;
case 4:
    printf("Copied string: %s\n",s2);
    break;
default:
    printf("Invalid number:\n");
}
return 0;
}
