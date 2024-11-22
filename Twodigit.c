#include<stdio.h>
int main(){

    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("%d\n", x>9 && x<100);
    printf("If it's 1 then the number has two digits\n");
    printf("If it's 0 then the number has one digit\n");
    return 0;

}