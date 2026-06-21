#include<stdio.h>
int main(){
    int num;
    float num2;
    scanf("%d",&num);
    scanf("%f",&num2);
    int *ptr=&num;
    float *ptr1=&num2;
    printf("%p\n",ptr);
    printf("%p\n",ptr1);
    return 0;
}