#include<stdio.h>
main()
{
int x,y,z;
printf("enter three integer number");
scanf("%d,%d,%d",&x,&y,&z);
int sum;
float avg;
sum=x+y+z;
avg=(float)sum/3;
printf("1st value=%d/n",x);
printf("2nd value=%d/n",y);
printf("3rd value=%d/n",z);
printf("sum=%d/n",sum);
printf("average of the three number=%.2f",avg);
}
