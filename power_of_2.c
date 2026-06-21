#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num>0 && (num&(num-1))==0){
        printf("%d is power by 2",num);    
    }
    else{
        printf("%d is not power of 2",num);
    }
    return 0;
}