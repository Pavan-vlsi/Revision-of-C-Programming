#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year to check whether leap year or not: \n");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("\n %d is Leap Year",year);
    }
    else
    printf("\n %d is Not a Leap Year",year);
}