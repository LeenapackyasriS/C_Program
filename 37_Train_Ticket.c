#include <stdio.h>
#include <conio.h>

void main(){
    int age;
    float price, final_price;
    char name[20];

    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Enter your name: ");
    scanf("%s", &name);

    price=1000;

    if (age <= 14){
        final_price = price - (price * 0.50);
        printf("You have 50 percentage discount on price!");
    } else if (age >= 60){
        final_price = price - (price * 0.30);
        printf("You have 30 percentage discount on price!");
    } else {
        printf("you don't have any discount on price!");
        final_price = price;
    }

    printf("\n\n--------- YOUR TRAIN TICKET ----------\n");
    printf("\nNAME: %s", name);
    printf("\nAGE: %d",age);
    printf("\n\nTICKET PRICE: %f\n",final_price);
}
