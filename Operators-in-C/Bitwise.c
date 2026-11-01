#include <conio.h>
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter Two numbers to perform Bitwise operations");
    printf("\nEnter first number a:");
    scanf("%d",&a);
    printf("\nEnter second number b:");
    scanf("%d",&b);
    printf("\n bitwise and (a & b):%d",a & b);
    printf("\n bitwise or (a | b):%d",a | b);
    printf("\n bitwise xor (a ^ b):%d",a ^ b);
    printf("\n bitwise compliment (~a):%d",~a);
    printf("\n bitwise left shift (a<<2):%d",a<<2);
    printf("\n bitwise right shift (a>>2):%d",a>>2);
  return 0;
}