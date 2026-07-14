#include <stdio.h>
#include <string.h>
int main() {
    char src[]="World", dest[20];
    strcpy(dest, src);
    printf("Copied String = %s", dest);
    return 0;
}
