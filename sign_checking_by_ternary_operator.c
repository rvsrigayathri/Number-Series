
#include<stdio.h>
int main(){
    int num1,positive,negative,zero;
    scanf("%d",&num1);
    if(num1>0){
        positive=(num1>0)? num1:0; 
        printf("%d is Positive",positive);
    }
    else if(num1<0){
        negative=(num1<0)? num1:0;
        printf("%d is Negative",negative);
    }
    else{
        zero=(num1==0)? num1:0;
        printf("%d is Zero",zero);
    }
    
    return 0;
}