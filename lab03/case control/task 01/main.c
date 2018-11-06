#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caseno;
    printf("enter the char:");
    scanf("%c",&caseno);
    switch(caseno)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("this is a vowel");
        break;
        default:
        printf("this is a constant");
    }

}
