#include <stdio.h>
#include <stdbool.h>

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    bool isPositive = (num > 0);
    bool isEven = (num % 2 == 0);

    printf("isPositive: %d\n", isPositive);
    printf("isEven: %d\n", isEven);

    if(isPositive && isEven) {
        printf("The number is a positive even number.\n");
    }

    return 0;
}
