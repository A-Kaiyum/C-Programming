#include <stdio.h>
int square();
void main()
{
    printf("Going to calculate Area - \n");
    float area = square();
    printf("The are of : %0.3f\n",area);
}

int square()
{
    printf("Enter length and wide : ");
    float side;
    scanf("%f",&side);
    return side*side;
}
