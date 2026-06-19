
#include <stdio.h>

int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);                         // num1=10; num2=10;
    if(num1==num2 && num1>=0 && num2>=0){               // 10==10 || 10!=10
        printf("Both the numbers are equal");           // if(10==10) print("Both the numbers are equal")
    }                                     
    else{                                               // if(10!=10) print("Both the numbers are not equal")
        printf("Both the numbers are not equal");
    }                                            
    return 0;  
}
