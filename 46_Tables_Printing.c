#include<stdio.h>
void main(){
    int n;
    printf("Enter number to generate tables you want! ");
    scanf("%d", &n);
    int i = 1;
    while(i<=20){
        printf("%d X %d = %d\n",i, n, i*n);
        i++;
    }
}
