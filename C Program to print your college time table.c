#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    switch(n){
case 1:
    printf("Subject Name: PHYSICS\n");
    printf("Timings:9:00am-10:00am\n");
    break;
case 2:
    printf("Subject Name: C PROGRAMMING\n");
    printf("Timings:10:00am-11:00am\n");
    break;
case 3:
    printf("Subject Name:LINUX\n");
    printf("Timings:11:30am-12:30pm\n");
    break;
case 4:
    printf("Subject Name: CMAT\n");
    printf("Timings:12:30pm-1:30pm\n");
    break;
case 5:
    printf("Subject Name: CO\n");
    printf("Timings: 2:00pm-3:00pm\n");
    default:
    printf("NO CLASSES\n");
}
return 0;
}
