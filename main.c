#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

int main()
{
   float radius;
   float area;

   printf("Enter the radius of circle : ");
   scanf("%f", &radius);
   {
   area = pi*radius*radius;
   printf("Area of Circle : %2f\n", area);
}
   return 0;

}
