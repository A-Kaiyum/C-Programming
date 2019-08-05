#include <stdio.h>

void funt(int n)
{

if(n<=0)
    return;
n=n-1;
funt(n);
printf("%d\n",n);


}

int main()
{
    funt(5);
}

