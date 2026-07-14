#include <stdio.h>
int main() {
    int a = 0, b = 1, i = 1;
    while(i <= 10) {
        printf("%d ", a);
        int temp = a + b;
        a = b;
        b = temp;
        i++;
    }
    return 0;
}
