#include<stdio.h>
int main(){
    
    int price, qty, total;

    printf("Enter the price and quantity:");
    scanf("%d %d", &price, &qty); 
    total = price*qty;
    printf("Total is: %d",total);
    return 0;

}