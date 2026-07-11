#include <stdio.h>
#include <conio.h>

void main(){
    int a, b;

    printf("enter the first number:");
    scanf("%d", &a);

    printf("Enter the second number:");
    scanf("%d", &b);

    int add= a+b;
    printf("\nAddition of %d and %d is %d",a,b,a+b);

    printf("\nSubtraction of %d and %d is %d",a,b,a-b);

    printf("\nMultiplication of %d and %d is %d",a,b,a*b);

    printf("\nDivision if %d and %d is %d",a, b, a/b);

    printf("\nModulus of %d and %d is %d",a,b,a%b);

}
