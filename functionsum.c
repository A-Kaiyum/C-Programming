#include<stdio.h>
int sum();
int a ,b;
void main()
{
    int result;
    printf("\n Going to calculate the sum of two number !");
    result = sum();
    printf("The sum is %d\n",result);
}


int sum()
{


    printf("Enter two Number : ");
    scanf("%d%d",&a,&b);
    return a+b;


}
