#include<stdio.h>
int main(){
    int num,count=0;
    scanf("%d",&num);
    while(num>0){
        if(num&1){                    //if num=5 ==> 5 = 0101
            count++;                            //   1 = 0001  &   
        }                                       //      ------
        num=num>>1;                             //       0001    = count++ 
    }                                           //      ------
    printf("%d",count);
    return 0;
}