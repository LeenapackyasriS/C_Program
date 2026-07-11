#include<stdio.h>
void main(){
    char name[20],address[50];
    int phone_no;

    printf("Enter your name:");
    scanf("%s", &name);
    printf("Enter your address: ");
    scanf("%s", address);
    printf("Enter your phone number: ");
    scanf("%d", phone_no);

    printf("\nHere is your details\n");
    printf("My name is %s", name);
    printf("My mobile number is %d", phone_no);



}

