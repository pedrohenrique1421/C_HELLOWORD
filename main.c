#include <stdio.h>
#include <stdlib.h>

int main (){
    float a;
    float b = 10;
    float c;
    printf("Funcionando \n");

    printf("Enter an integer: ");
    scanf("%f", &a);

    c = b + a;

    printf("\n Output: %f", c);

    return 0;
};