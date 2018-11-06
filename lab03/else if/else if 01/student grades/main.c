#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    float avg;
    printf("enter the first score a:");
    scanf("%d",&a);
    printf("enter the second score b:");
    scanf("%d",&b);
    printf("enter the third score c:");
    scanf("%d",&c);
    avg=(a+b+c)/3;
    printf("the average score is:%.2f\n",avg);

   if(avg>=90)
   {
       printf("A grade");
   }
   else if(avg>=70 && avg<=90)
   {
       printf("B grade");
   }
   else if(avg>=50 && avg<70)
   {
       printf("C grade");
   }
   else if(avg<50)
   {
       printf("F grade");
   }
return 0;
}
