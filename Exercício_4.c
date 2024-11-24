/* Escreva um programa que solicite ao usuário um número e imprima os números de 1 até o número inserido exceto os 
números múltiplos de 3, usando um laço de repetição. */

#include <stdio.h>

int main() {
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 3 != 0) {  
            printf("%d\n", i);
        }
    }

    return 0;
}
