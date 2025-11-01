#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i,M;
printf("Enter a number: ");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
M=n*i;
printf("%d X %d = %d\n",n,i,M);
}
return 0;
}
