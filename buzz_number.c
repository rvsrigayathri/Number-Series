#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num%7==0 || num%10==7){
        printf("Buzz Number");
    }
    else{
        printf("Not a buzz number");
    }
    return 0;
}