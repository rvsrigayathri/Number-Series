#include<stdio.h>
int main()
{
    int i,num=2,count=0,n,flag;
    scanf("%d",&n);
    while(count<n)
    {
        flag=1;
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1){
                printf("%d ",num);
                count++;
        }
        
        num++;
    }
    return 0;
}