#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);     
    num1 -= num2;                   
    printf("Compound subtraction: %d\n",num1);     
    num1 *= num2;
    printf("Compound multiplication: %d\n",num1);  
    num1 /= num2;
    printf("Compound division: %d\n",num1);  
    return 0;
}

/*
#include<stdio.h>
int main(){
    float num1,num2;
    scanf("%f %f",&num1,&num2);     
    num1 -= num2;                   
    printf("Compound subtraction: %.2f\n",num1);     
    num1 *= num2;
    printf("Compound multiplication: %.2f\n",num1);  
    num1 /= num2;
    printf("Compound division: %.2f\n",num1);  
    return 0;
}

*/