#include <stdio.h>
int main() {
    int num = 153, sum = 0, temp, digit;
    temp = num;
    while(temp > 0) {
        digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }
    if(sum == num)
        printf("%d is an Armstrong number", num);
    else
        printf("%d is not an Armstrong number", num);
    return 0;
}
