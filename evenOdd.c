#include <stdio.h>
int evenOdd(int);
void main()
{
    int n,flag=0;
    printf("Check even odd : ");
    printf("Enter the Number : ");
    scanf("%d",&n);
    evenOdd(n);

}


int evenOdd(n)
{
    if(n%2==0)
        {
          printf("The Number is Even\n");
        }
    else
    {
       printf("The Number is Odd\n");
    }
}
