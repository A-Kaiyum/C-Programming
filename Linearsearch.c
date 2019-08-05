#include<stdio.h>
int main()
{
    int num[]={12,4,15,26,7,75,45,50};
    int value,i,pos=-1;
    printf("Enter the value : ");
    scanf("%d",&value);
    for(i=0;i<8;i++)
    {
        if(value==num[i])
        {
            pos = i+1;
            break;
        }
    }
    if(pos == -1)
    printf("Not found ");
    else
    {
        printf("The position of %d is : %d\n",value,pos);
    }

}
