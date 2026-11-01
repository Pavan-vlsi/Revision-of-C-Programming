#include <conio.h>
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter Two numbers to perform relational operations");
    printf("\nEnter first number a:");
    scanf("%d",&a);
    printf("\nEnter second number b:");
    scanf("%d",&b);
    printf("\na equal to b:%d",a==b);
    printf("\na not equal to b:%d",a!=b);
    printf("\na greater than b:%d",a>b);
    printf("\na less than b:%d",a<b);
    printf("\na greater than or equal to b:%d",a>=b);
    printf("\na less than or equal to b:%d",a<=b);
  return 0;
}