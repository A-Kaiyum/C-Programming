#include<stdio.h>
int main()
{
    int a , b, c;
    printf("Enter Three Number :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is the largest Number !",a);
    }

    if(b>a && b>c)
    {
        printf("%d is the largest Number !",b);

    }
    if (c>a && c>b)
    {
        printf("%d is the largest Number !",c);
    }
    if(a==b && a==c)
    {
        printf("All are equal !");

    }
}
