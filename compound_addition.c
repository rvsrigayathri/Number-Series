#include<stdio.h>
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);     // num1=10; num2=5;    || num1=-5; num2=20;
    num1 += num2;                   // num1=10+5 =15;      || num1=-5+20 =15;
    printf("%d",num1);              // num1=15;
    return 0;
}
