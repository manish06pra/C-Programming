#include <stdio.h>
#include <stdlib.h>

int getNumber(){
int num;
printf("Enter a number:");
scanf("%d",&num);
return num;
}
int main(){
int n=getNumber();
printf("You entered:%d",n);
}
