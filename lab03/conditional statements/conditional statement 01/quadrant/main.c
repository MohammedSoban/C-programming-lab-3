#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("enter the the value of x:");
    scanf("%d",&x);
      printf("enter the the value of y:");
       scanf("%d",&y);

    if(x>0 && y>0)
    {
     printf("the point lies in first(I) quadrant");
    }

    else if(x<0 && y>0)
    {
        printf("the point lies in second(II) quadrant");
    }
    else if(x>0 && y<0)
    {
        printf("the point lies in third(III) quadrant");
    }
    else if(x<0 && y<0)
    {
        printf("the point lies in fourth(IV) quadrant\n");
        }
        else if(x==0 && y==0)
        {
            printf("the point lies in origin");
        }
}
