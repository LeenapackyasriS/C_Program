#include <stdio.h>
int main() {
    int arr[5] = {10, 25, 30, 45, 50}, key = 30, found = 0;
    for(int i=0;i<5;i++){
        if(arr[i] == key){
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if(!found) printf("Element not found\n");
    return 0;
}
