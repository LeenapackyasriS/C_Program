#include <stdio.h>
int main() {
    int num, count = 0;
    printf("enter the number: ");
    scanf("%d", &num);
    while(num > 0) {
        count++;
        num /= 10;
    }
    printf("Digits = %d", count);
    return 0;
}
