#include <stdio.h>
int change(int num)
{
    printf("Before adding the number = %d\n",num);
    num = num+100;
    printf("After adding the number = %d\n",num);
    return num;
}

int main()
{
    int x = 100;int b;
    printf("Before function call x= %d\n",x);
    change(x);
    printf("After function call x = %d\n",x);

}
