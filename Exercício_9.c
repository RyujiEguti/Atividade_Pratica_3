/* Quadrado de asteriscos. Escreva um programa que leia o lado de um quadrado e depois exiba esse quadrado a partir 
de asteriscos. Por exemplo, se o programa ler um tamanho 4, ele deverá exibir.
****
****
****
**** */

#include <stdio.h>

int main() {
    int lado;

    printf("Digite o tamanho do lado do quadrado: ");
    scanf("%d", &lado);

    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++) {
            printf("*");  
        }
        printf("\n");  
    }

    return 0;
}
