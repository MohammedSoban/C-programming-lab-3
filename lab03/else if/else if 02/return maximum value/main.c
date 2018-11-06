#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("enter first value of x:");
    scanf("%d",&x);
    printf("enter second value of y:");
    scanf("%d",&y);
    printf("enter third value of z:");
    scanf("%d",&z);

    if (x > y && x > z) {
        printf("x is Greater than y and z");
    }
    else if (y > x && y > z) {
        printf("y is Greater than x and z");
    }
    else if (z > x && z > y) {
        printf("z is Greater than x and y");
    }
    else  {
        printf("all values are equal or two values are equal");
    }


return 0;
}

