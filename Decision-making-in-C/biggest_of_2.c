#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Enter Two Numbers to check for biggest number among two :");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
    {
         printf("number %d is bigger",n1);
    }
    if(n2>n1)
    {
         printf("number %d is bigger",n2);
    }
    return 0;
}