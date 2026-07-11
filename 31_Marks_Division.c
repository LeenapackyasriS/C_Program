#include <stdio.h>
int main() {
    int marks;
    scanf("%d", &marks);
    if(marks >= 60) {
        printf("First Division\n");
    } else if(marks >= 45) {
        printf("Second Division\n");
    } else {
        printf("Third Division\n");
    }
    return 0;
}
