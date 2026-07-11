#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if(a > b) {
        printf("a is greater.\n");
    } else {
        printf("b is greater.\n");
    }
    return 0;
}
