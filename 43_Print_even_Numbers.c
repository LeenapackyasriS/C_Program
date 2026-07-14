#include <stdio.h>
int main() {
    int n;
    printf("enter the number: ");
    scanf("%d", &n);
    int i = 2;
    while(i <= n) {
        printf("%d ", i);
        i += 2;
    }
    return 0;
}
