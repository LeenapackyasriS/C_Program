#include <stdio.h>

int main() {
    float num = 9.8;
    int result;

    result = (int) num; // explicit conversion (float → int)

    printf("Original float: %.2f\n", num);
    printf("After explicit conversion: %d\n", result);

    return 0;
}
