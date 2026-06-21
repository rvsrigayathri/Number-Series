#include <stdio.h>

int main()
{
   int num1,num2,num3,high_precedence,low_precedence;
   scanf("%d %d %d",&num1,&num2,&num3);
   high_precedence=(num1+num2)*num3;    // if num1=10; num2=5; num3=2 ==>then (10+5)*2 = (15)*2 = 30
   low_precedence=num1+num2*num3;      // if num1=10; num2=5; num3=2 ==>then 10+5*2 = 10+10 = 20
   printf("%d\n",high_precedence);
   printf("%d",low_precedence);
   return 0;
}