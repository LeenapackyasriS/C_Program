#include <stdio.h>
int main() {
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    switch(op) {
        case '+': 
            printf("Sum = %d\n", a+b); 
            break;
        case '-': 
            printf("Difference = %d\n", a-b); 
            break;
        case '*': 
            printf("Product = %d\n", a*b); 
            break;
        case '/': 
            printf("Quotient = %d\n", a/b); 
            break;
        default: 
            printf("Invalid operator\n");
    }