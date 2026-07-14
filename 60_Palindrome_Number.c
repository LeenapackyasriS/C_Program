#include <stdio.h>
int main() {
    int num = 121, rev = 0, temp = num;
    while(temp > 0) {
        rev = rev*10 + temp%10;
        temp /= 10;
    }
    if(rev == num)
        printf("%d is Palindrome", num);
    else
        printf("%d is not Palindrome", num);
    return 0;
}
