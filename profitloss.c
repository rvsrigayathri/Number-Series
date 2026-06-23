#include<stdio.h>
int main(){
    float investment,current_price,buy_price,shares,profitloss;
    scanf("%f %f %f ",&investment,&current_price,&buy_price);
    shares=investment/current_price;
    profitloss=shares*(current_price-buy_price);
    if(profitloss>0){
        printf("Profit = %.2f",profitloss);
    }
    else if(profitloss<0){
        printf("Loss = %.2f",profitloss);
    }
    else{
        printf("No loss no profit %d",profitloss);
    }
    return 0;
}