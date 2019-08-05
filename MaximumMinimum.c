#include <stdio.h>
int a[20],i,n,max,min;
int main()
{
    printf("Enter The Number : ");
    scanf("%d",&n);
    for(i =0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int maxi = maximum();
    printf("The maximum value is : %d\n",maxi);
    int mini = minimum();
    printf("The minimum value is : %d\n",mini);


}

int maximum (n,i)
{

  max = a[0];
    for (i=1; i<n; i++)
    {
        if(max <a[i])
            max= a[i];
    }

}


int minimum(n,i) {

    min = a[0];
    for (i=1; i<n; i++)
    {
        if(min > a[i])
            min= a[i];
    }
}
