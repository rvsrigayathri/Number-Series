
#include <stdio.h>

int main()
{
    int num1;
    scanf("%d",&num1);
    if(num1>=10 && num1<=50){
        printf("The number '%d' is lies between 10 to 50",num1);
    }                                    
    else{
        printf("The number '%d' is not lies between 10 to 50",num1);
    }                                            
    return 0;  
}
