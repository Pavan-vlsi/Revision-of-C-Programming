#include<stdio.h>
void main()
{
    char ch;
    printf("Enter any charecter:");
    scanf("%c",&ch);
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
    {
        printf("Charecter is a alphabet");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("Charecter is a digit");
    }
    else
    printf("Charecter is a symbol");
}