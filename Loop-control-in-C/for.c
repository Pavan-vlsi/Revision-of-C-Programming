#include<conio.h>
#include<stdio.h>
void main()
{
    int n,sum;
    sum=0;
    printf("Enter the limit to calculate sum of N natural numbers:\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
printf("Sum=%d",sum);
}
