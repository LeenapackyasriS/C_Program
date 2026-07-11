#include <stdio.h>
int main() {
    int temp;
    scanf("%d", &temp);
    if(temp > 35) {
        printf("Hot\n");
    } else if(temp > 20) {
        printf("Warm\n");
    } else {
        printf("Cold\n");
    }
    return 0;
}
