#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("input a number:");
    scanf("%d",&a);
    if(a%2==0){
        printf("its an even number:");
    }
    else{
        printf("its an odd number:");
    }
    return 0;
}
