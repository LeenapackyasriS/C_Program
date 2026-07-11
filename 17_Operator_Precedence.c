#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int result1 = a + b * 2;       // multiplication first
    int result2 = (a + b) * 2;     // parentheses change order

    printf("a + b * 2 = %d\n", result1);
    printf("(a + b) * 2 = %d\n", result2);

    return 0;
}
