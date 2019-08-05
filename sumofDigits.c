#include <stdio.h>
int main()
{
    int n,r,sum=0,temp;
    printf("Enter The Number : ");
    scanf("%d",&n);
    temp=n;
    while(n>0){

        r=n%10;
        sum = sum+r;
        n=n/10;

    }
    printf("Sum is : %d\n",sum);

}

