#include <stdio.h>
#include <stdlib.h>

int main (){
    float a;
    float b = 10;
    float c;
    printf("Funcionando \n");

    printf("Digite um numero float: ");
    scanf("%f", &a);

    c = b + a;

    printf("\n Output: %.2f", c);

    printf("\n");

    system("pause");

    return 0;
};
