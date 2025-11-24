#include <stdio.h>
#include <stdlib.h>
struct student{
    int id;
    char name[20];
    float marks;
};
int main(){
struct student s1={101,"Manish",89.2};
printf("ID:%d\n",s1.id);
printf("Name:%s\n",s1.name);
printf("Marks:%2f\n",s1.marks);
return 0;
}

