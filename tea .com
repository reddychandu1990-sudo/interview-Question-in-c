#include <stdio.h>

void main()
{
    int tea,candy;
    printf("enter the comment of tea || candy\n");
    scanf("%d %d",&tea,&candy);
    if ( tea<5||candy<5)
    {
        printf("o");
    }
     else if (tea>=2*candy||candy>=2*tea)
    {
        printf("2");
    }
    else 
    {
        printf("1");
    }
}