#include<stdio.h>
void main()
{
    float radius,area,pi=3.14;

    printf("Enter the Radius of a Circle : ");
    scanf("%f",&radius);

    area = pi*radius*radius;

    printf("Area of Circle is: %f",area);
    getch();
}
