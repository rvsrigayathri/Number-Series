#include <stdio.h>

int main()
{
   int num;
   scanf("%d",&num);
   if(num!=0 || num<0 || num>0){
       printf("%d -> NOT ZERO",num);
   }
   else{
       printf("%d -> ZERO",num);
   }
   return 0;
}


/*
#include <stdio.h>

int main()
{
   int num;
   scanf("%d",&num);
   if(num==0){
       printf("%d -> ZERO",num);
   }
   else{
       printf("%d -> NOT ZERO",num);
   }
   return 0;
}
*/