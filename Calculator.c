#include<stdio.h>
int main(){
    
    int a;
    int b;
    printf("Enter the number1:");
    scanf("%d",&a);
    printf("Enter the number2:");
    scanf("%d",&b);
    printf("The addition of %d and %d is: %d\n",a,b,a+b);
    printf("The subtraction of %d and %d is: %d\n",a,b,a-b);
    printf("The multiplication of %d and %d is: %d\n",a,b,a*b);
    printf("The division of %d and %d is: %d\n",a,b,a/b);
    printf("The modulo of %d and %d is: %d\n",a,b,a%b);
    
    return 0;

}