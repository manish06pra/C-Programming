#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
char s1[20]="Good";
char s2[]=" Morning";
strcat(s1,s2);
printf("Result: %s",s1);
return 0;
}
