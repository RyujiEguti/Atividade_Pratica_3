/* Crie um programa que calcule a soma dos números pares de 2 até n, sendo n um valor fornecido pelo usuário usando um 
loop "for ou while". */

#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite um número n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        soma += i;  
    }

    printf("A soma dos números pares de 2 até %d é: %d\n", n, soma);

    return 0;
}
