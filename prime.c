#include<stdio.h>
int main(){
    int num,i;
    scanf("%d",&num);
    for(int i=2;i<=num;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
       		printf("%d ",i);
    	}
    }
    
    return 0;
}
/*
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
*/