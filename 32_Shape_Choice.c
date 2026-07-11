#include <stdio.h>
int main() {
    int choice;
    scanf("%d", &choice);
    if(choice == 1) {
        printf("Circle\n");
    } else if(choice == 2) {
        printf("Square\n");
    } else if(choice == 3) {
        printf("Triangle\n");
    } else {
        printf("Invalid\n");
    }
    return 0;
}
