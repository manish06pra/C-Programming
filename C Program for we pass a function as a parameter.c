#include <stdio.h>
#include <stdlib.h>

void sayhello()
{
printf("HEllo students! You just called me back!\n");
}
void stuwork(void(*callbackfun)())
{
printf("Student is doing homework  ");
callbackfun();
}

int main()
{
stuwork(sayhello);
return 0;
}
