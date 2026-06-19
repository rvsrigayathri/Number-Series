
#include <stdio.h>

int main()
{
    int num1;
    scanf("%d",&num1);
    printf("Post-increment: %d\n",++num1);
    printf("Pre-increment: %d",num1++);
    return 0;  
}