#include<stdio.h>
int main()
{
    int hours,rate;
    float salary;
    scanf("%d %d",&hours,&rate);
    if(hours<=40){
        salary=hours*rate;                // if hours=38; rate=5 ==>>  salary=38*5 =190.00
    }
    else{
        salary=(rate*40)+((hours-40)*rate*1.5);  // if hours=45; rate=5 ==>> salary=(5*40)+((45-40)*5*1.5)  =(200)+((5)*7.5) =200+ 37.5 = 237.5
    }
    printf("%.2f",salary);
    return 0;
}
