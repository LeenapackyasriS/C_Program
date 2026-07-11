#include <stdio.h>

int main() {
    const float PI = 3.14159; // constant value
    int radius = 5;
    float area;

    area = PI * radius * radius;

    printf("Circle area with radius %d = %.2f\n", radius, area);

    return 0;
}
