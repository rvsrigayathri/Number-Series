#include<stdio.h>
int main()
{
    int num,n,i;
    scanf("%d",&num);
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",num*i);
    }
    return 0;
}