#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
char src[]="Welcome";
char des[20];
strcpy(des,src);
printf("Result: %s",des);
return 0;
}
