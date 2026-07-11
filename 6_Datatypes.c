#include<stdio.h>
void main(){
    char init = 'S';
    char name[20] = "Leenapackyasri"; // String variable to store the name
    int age = 20;
    float height = 5.5;
    double pi = 3.1415926535;
    char address[50] = "xxxxx, yyyyy, zzzzz.";


    printf("My name is %c.%s\n",init,name);

    printf("My age is %d\n",age);

    printf("My height is %.2f", height);

    printf("\nThe value of pi is %.10lf", pi);

}
