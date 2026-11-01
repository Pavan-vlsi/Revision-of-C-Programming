#include <conio.h>
#include <stdio.h>
int main()
{
    /*Arithemtic Operations*/
    int a,b,sum,dif,mul,mdiv,n,inc,dec;
    float div;
    printf("\n Enter First Number:");
    scanf("%d",&a);
    printf("\n Enter Second Number:");
    scanf("%d",&b);
    sum=a+b;
    dif=a-b;
    mul=a*b;
    div=(float)a/b;
    mdiv=a%b;
    printf("\n Addition=%d",sum);
    printf("\n Subtraction=%d",dif);
    printf("\n Multiplication=%d",mul);
    printf("\n Devision=%f",div);
    printf("\n Modulo Division=%d",mdiv);
    printf("\n Enter a Number:");
    scanf("%d",&n);
    printf("number is:%d",n);
    inc=++n;
    printf("\n Increment of a number is:%d",inc);
    dec=--n;
    printf("\n Decrement of a number is:%d",dec);
    return 0;
}