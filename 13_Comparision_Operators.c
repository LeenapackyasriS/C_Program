#include <stdio.h>

void main(){
    int a,b;

    printf("Enter the number for A: ");
    scanf("%d", &a);

    printf("Enter the number for B: ");
    scanf("%d", &b);

    printf("A is > B: %d", a>b);
    printf("\nA is < B: %d", a<b);
    printf("\nA is > or = B: %d", a>=b);
    printf("\nA is < or = B: %d", a<=b);
    printf("\nA is < or = B: %d", a==b);



}
