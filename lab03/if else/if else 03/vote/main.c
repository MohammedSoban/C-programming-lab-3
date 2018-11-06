#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if(age>18)
    {
        printf("the age is eligible for vote");

    }
    else
        {
            printf("the age is no eligible for vote");
        }

    return 0;
}
