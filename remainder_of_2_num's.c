
#include <stdio.h>

int main()
{
   int num1,num2,num3;
   scanf("%d %d",&num1,&num2);           // num1=10; num2=3;
   num3=num1%num2;                      // num3=10/3;
   printf("%d",num3);                   // Ans: num3=1
   return 0;
}

/*
    int num1,num2;
    float num3;
    scanf("%d  %d",&num1,&num2);         // num1=10 ; num2=3;
    num3=num1%num2;                      // num3=10/3;
    printf("%.2f",num3);                 // Ans: num3=1.00
    return 0;                                    
*/