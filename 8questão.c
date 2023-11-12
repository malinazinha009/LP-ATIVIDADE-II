#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale (LC_ALL, "portuguese");

    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Por favor, insira um numero inteiro positivo.\n");
        return 1;
    }
    
    while (numero >= 0) {
        switch (numero) {
            case 0:
                printf("Zero\n");
                break;
            default:
                printf("Contagem regressiva: %d\n", numero);
        }
        numero--; 
    }

    return 0;
}