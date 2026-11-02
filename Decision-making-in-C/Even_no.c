#include <stdio.h>
int main()
{
    int n;
    printf("Enter A Number to check whether even or not :");
    scanf("%d",&n);
    if(n%2==0)
    {
         printf("number %d is Even",n);
    }
    if(n%2!=0)
    {
         printf("number %d is not Even",n);
    }
    return 0;
}