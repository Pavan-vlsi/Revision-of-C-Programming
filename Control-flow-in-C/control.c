#include<stdio.h>
#include<conio.h>
int main()
{
    int p,total;
    total=0;
    printf("Enter the price of 5 items :\n");
    for(int i=0;i<5;i++)
    {
    scanf("%d",&p);
    if(p<0)
    {
        printf("Invalid pricing,skipping this item\n");
        continue;
    }
    if(p==0)
    {
        printf("Ending item scanning ,done pricing\n");
        break;
    }
    total+=p;

    if(total>500)
    {
        goto over_budget;
    }
}
    printf("Final Bill Total:%d ",total);
    return 0;
    over_budget:
    printf("Budget limit exceeded(500)");
    return 0;

}