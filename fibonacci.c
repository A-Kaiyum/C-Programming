#include <stdio.h>
int main()
{
    int a[20],n,i;
    printf("Enter how many fibonacci Number : ");
    scanf("%d",&n);
    a[0]=0;
    a[1]=1;
    for(i=2; i<n;i++)
    {
        a[i] =a[i-1]+a[i-2];

    }
    printf("\n");
    printf("This is your fibonacci Number-  ");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

}
