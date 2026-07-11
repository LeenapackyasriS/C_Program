#include <stdio.h>
int main() {
    int month;
    scanf("%d", &month);
    if(month == 1) {
        printf("January\n");
    } else if(month == 2) {
        printf("February\n");
    } else if(month == 3) {
        printf("March\n");
    } else {
        printf("Other Month\n");
    }
    return 0;
}
