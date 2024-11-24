/* Faça um programa que retorne a soma dos números ímpares 1 até n, sendo n fornecido pelo usuário */

#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite um número n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        soma += i; 
    }

    printf("A soma dos números ímpares de 1 até %d é: %d\n", n, soma);

    return 0;
}
