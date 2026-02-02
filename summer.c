#include <stdio.h>

void main()
{
    int temper;
    int summer;
    printf("enter the temperature \n");
    scanf("%d",&temper);
    printf(" summer is 1 \t not summer 0 \n");
    scanf("%d",&summer);
    if (summer)
    {
        if (temper>=60&&temper<=100)
        {
            printf("true");
        }
        else
        {
            printf("false");
        }
        }
        else
        {
            if(temper>=60&&temper<=90)
            {
                printf("true");
            }
            else
            {
              printf("false");
              
              
            }
        }
        }