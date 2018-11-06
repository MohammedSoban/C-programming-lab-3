#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    float a,b;
    printf("enter first number:");
    scanf("%f",&a);
    scanf("%f",&b);
    printf("enter second number:");
    scanf("%f",&b);
    printf("enter a operator:");//int a,b,c;//int a,b,c;
    scanf("%*c%c",&operator);

    switch(operator){//int a,b,c;
  case '+'://int a,b,c;
      printf("%.2f+%.2f=%.2f",a,b,a+b);//int a,b,c;
      break;
  case '-':
    printf("%.2f-%.2f=%.2f",a,b,a-b);
    break;
  case '*':
    printf("%.2f*%.2f=%.2f",a,b,a*b);
    break;
  case '/':
    printf("%.2f/%.2f=%.2f",a,b,a/b);
    break;
    default:
    printf("error opreation unkonow");

    }


    return 0;
}
