#include <stdio.h>
#include <stdlib.h>

int main()
{
float num1,num2,num3,result;
char op;
printf("simple calculator using switch-case\n");
printf(".....\n");
printf("enter an operator(+,-,*,/):");
scanf("%c",&op);

printf("enter two numbers:");
scanf("%f %f",&num1,&num2);

switch(op)
{
case'+':
    result=num1+num2;
    printf("result=%.2f\n",result);
    break;

case'-':
    result=num1-num2;
    printf("result=%.2f\n",result);
    break;

case'*':
    result=num1*num2;
    printf("result=%.2f\n",result);
    break;

case'/':
    result=num1/num2;
    if(num2!=0)
    printf("result=%.2f/",num1/num2);
    else
        printf("error!division by zero is not allowed.\n");
    break;

default:
    printf("invalid operator!please use +,-,*,or/.n");
}
return 0;
}
