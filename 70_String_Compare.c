#include <stdio.h>
#include <string.h>
int main() {
    char str1[] = "Apple", str2[] = "Banana";
    int result = strcmp(str1, str2);
    if(result == 0) printf("Strings are equal\n");
    else if(result < 0) printf("str1 is smaller\n");
    else printf("str1 is greater\n");
    return 0;
}
