/* Formas com asteriscos. Escreva um programa que imprima as seguintes formas com asteriscos. Por exemplo, se o programa 
ler um tamanho 4 fornecido pelo usuário, ele deverá exibir
*
**
***
**** */

#include <stdio.h>

int main() {
    int tamanho;

    printf("Digite o tamanho da forma: ");
    scanf("%d", &tamanho);

    for (int i = 1; i <= tamanho; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");  
        }
        printf("\n");  
    }

    return 0;
}