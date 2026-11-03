#include <stdio.h>
void main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if(n>0)
    printf("Number is greater than 0");
    else
    {
        if(n==0)
        printf("Number is 0");
        else
        printf("Number is less than zero");
    }
}