#include<stdio.h>
int main()
{
    int a[50],i,n,sum=0;
    printf("Please Enter the Size : ");
    scanf("%d",&n);
    printf("Please Enter The number : ");
    for(i = 0; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<=n; i++)
    {
        sum += a[i];
    }
    printf("The sum is : %d\n",sum);
    printf("The avarage is : %0.2f\n",(float)sum/n);
    return 0;
}
