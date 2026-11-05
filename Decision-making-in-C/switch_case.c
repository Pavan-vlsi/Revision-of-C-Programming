#include<stdio.h>
#include<conio.h>
void main()
{
    int n1,n2;
    char op;
    printf("Enter the operator to perform respective operation \n +\n-\n*\n/\n");
    scanf("%c",&op);
    printf("Enter two numbers to perform the operation:\n");
    scanf("%d \n %d",&n1,&n2);
    switch(op)
    {
        case('+'):
        printf("Result=%d",n1+n2);
        break;
        case('-'):
        printf("Result=%d",n1-n2);
        break;
        case('*'):
        printf("Result=%d",n1*n2);
        break;
        case('/'):
        printf("Result=%d",n1/n2);
        break;
        default:
        printf("Enter The valid operator");    
        break;    
    }
}