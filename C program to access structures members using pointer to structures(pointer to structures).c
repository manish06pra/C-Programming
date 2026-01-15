#include <stdio.h>
#include <stdlib.h>

struct student{
int id;
char name[20];
};
int main(){
struct student s={101,"Man"};
struct student*ptr=&s;
printf("ID:%d\n",ptr->id);
printf("Name:%s\n",ptr->name);
return 0;
}

