#include <stdio.h>
#include <stdlib.h>
#define size 5
int stack[size];
int top=-1;
    void push(int value){
    if(top==size-1){
        printf("Stack overflow!cannot push%d\n",value);
    }
    else{
     stack[++top]=value;
     printf("%d pushed to stack\n",value);

    }
    }
    void pop(){
    if(top==-1){
            printf("Stack underflow!no element to pop\n");
   }
    else{
        printf("% d popped from stack\n",stack[top-1]);
    }
}
void peek(){
    if(top==-1){
        printf("stack is empty\n");
        }
        else {
            printf("top element is % d\n", stack[top]);
        }
}
void display(){
if(top==-1)
    printf("stack is empty\n");
    else{
        printf("stack elements:");
        for(int i=top;i>=0;i--)
            printf("% d",stack[i]);
        printf("\n");
    }
}
int main(){
push(10);
push(20);
push(30);
display();
pop();
display();
return 0;
}
