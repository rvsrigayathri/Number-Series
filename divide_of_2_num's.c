
#include <stdio.h>

int main()
{
   int num1,num2,num3;
   scanf("%d %d",&num1,&num2);           // num1=100; num2=7;
   num3=num1/num2;                      // num3=100/7;
   printf("%d",num3);                   // Ans: num3=14
   return 0;
}

/*
    int num1,num2;
    float num3;
    scanf("%d  %d",&num1,&num2);         // num1=100 ; num2=7;
    num3=num1/num2;                      // num3=100/7;
    printf("%.2f",num3);                 // Ans: num3=14.00
    return 0;                                    
*/