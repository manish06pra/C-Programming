#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, temp;
    int *p1, *p2;

    printf("Enter First Number: ");
    scanf("%d", &a);

    printf("Enter Second Number: ");
    scanf("%d", &b);

    printf("Before Swapping: a = %d,b = %d\n", a, b);

    p1 = &a;
    p2 = &b;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After Swapping: a = %d, b = %d", a, b);

    return 0;
}

