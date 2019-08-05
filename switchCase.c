#include<stdio.h>
int main()
{
    int number = 0;
    printf("Enter a Number: ");
    scanf("%d",&number);
    switch(number){

    case 10:
    printf("The number is mached!");
    break;

    case 20:
      printf("The number is mached!");
    break;
    case 30:
      printf("The number is mached!");
    break;
    case 40:
      printf("The number is mached!");
    break;

    default:
        printf("Sorry The number is not mached !\n");
    }
}
