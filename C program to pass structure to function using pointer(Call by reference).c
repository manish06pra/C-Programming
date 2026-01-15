#include <stdio.h>
#include <stdlib.h>

struct student {
int id;
char name[20];
};
void display(struct student *s){
printf("ID:%d\n",s->id);
printf("Name:%s\n",s->name);
}
int main(){
    struct student s1={101,"Mani"};
    display(&s1);
    return 0;
}

