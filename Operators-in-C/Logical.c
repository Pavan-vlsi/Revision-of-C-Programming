#include <conio.h>
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter Two numbers to perform Logical operations");
    printf("\nEnter first number a:");
    scanf("%d",&a);
    printf("\nEnter second number b:");
    scanf("%d",&b);
    printf("\n Logical and (a && b):%d",a && b);
    printf("\n Logical or (a || b):%d",a || b);
    printf("\n Logical not (! b):%d", !b);
    return 0;
}