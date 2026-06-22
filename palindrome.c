#include<stdio.h>
int main(){
    int num,temp,rev,rem;
    scanf("%d",&num);
    temp=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if(temp==rev){
        printf("Palindrome");
    }
    else{
        printf("Not a plaindrome");
    }
    return 0;
}