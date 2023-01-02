#include<stdio.h>
int main()
{
    int radius = 0;
    float area , perimeter;
    radius=6;
    perimeter=2*3.14*radius;
    printf("Perimeter of the circle:%f inches\n",perimeter);

    area= 3.14*radius*radius;
    printf("Area of the circle:%f square inches\n",area);
    return 0;
}