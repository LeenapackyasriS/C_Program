#include <stdio.h>

int main() {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);

    printf("Original x: %d\n", x);
    printf("Post-increment x++: %d\n", x++);
    printf("After post-increment: %d\n", x);
    printf("Pre-increment ++x: %d\n", ++x);

    printf("Post-decrement x--: %d\n", x--);
    printf("After post-decrement: %d\n", x);
    printf("Pre-decrement --x: %d\n", --x);

    return 0;
}
