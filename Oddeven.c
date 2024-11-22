#include<stdio.h>
int main(){

    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("%d\n",x % 2 == 0);
    printf("If it's 1 then it is an even\n");
    printf("If it's 0 then it is an odd");

    return 0;


}