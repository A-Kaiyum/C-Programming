#include <stdio.h>
int fact(int);
int main()
{
    int n,f;
    printf("Enter the Factorial : ");
    scanf("%d",&n);
    f = fact(n);
    printf("factorial = %d\n",f);
}

int fact(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }

}

