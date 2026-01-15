#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication Table of %d:\n", num);

    do
        {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }
    while (i <= 10);

    return 0;
}
