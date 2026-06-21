#include<stdio.h>
int main()
{
    int iteration,i,j,num;
    scanf("%d",&iteration);
    for(int i=1;i<=iteration;i++)
    {
        num=i%2;
        
        for(j=1;j<=i;j++)
        {
            printf("%d ",num);
            num=1-num;
        }
        printf(" \n");

    }
    
    return 0;
}