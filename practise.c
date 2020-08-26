#include<stdio.h>
int main()
{
    float radius;
    float pi= 3.14;
    printf("What is the radius of the circle\n");
    scanf("%f",&radius);
    printf("Area of circle is %f", pi*radius*radius);
    return 0;
}