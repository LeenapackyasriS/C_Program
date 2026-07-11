#include <stdio.h>

int main() {
    int x = 5;
    float y;

    y = x; // implicit conversion (int → float)

    printf("Integer: %d\n", x);
    printf("Converted to float: %.2f\n", y);

    return 0;
}
