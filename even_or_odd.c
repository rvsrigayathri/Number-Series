#include <stdio.h>

int main()
{
    int num1;
    scanf("%d",&num1);                               // num1=10;
    if(num1%2==0){                                  // 10%2==0 || 10%2!=0
        printf("The number is even '%d'",num1);     // if(10%2==0) print("The number is even '10'")
    }                                     
    else{                                           // if(10%2!=0) print("Th number is odd  '10'")
        printf("The number is odd '%d'",num1);
    }                                            
    return 0;  
}