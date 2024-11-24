/* Escreva um programa que encontre o maior número em uma lista de números fornecidos pelo usuário usando um loop 
"while". */

#include <stdio.h>

int main() {
    int n, numero, maior;

    printf("Quantos números você deseja inserir? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Você deve inserir ao menos um número.\n");
        return 1;
    }

    printf("Digite o primeiro número: ");
    scanf("%d", &numero);
    maior = numero;

    int i = 1; 
    while (i < n) {
        printf("Digite o próximo número: ");
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
        }

        i++; 
    }

    printf("O maior número é: %d\n", maior);

    return 0;
}
