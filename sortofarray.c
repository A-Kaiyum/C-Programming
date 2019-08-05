#include <stdio.h>
void main()
{
    int i,j,temp;
    int a[10]={12,14,15,67,45,767,45,23,19,45};
    for(i=0;i<10;i++)
    {

        for(j=i+1;j<10;j++)
        {
            if(a[j]<a[i])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

    }
    printf("Printing sorted Elements list...\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
}
