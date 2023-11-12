#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){

setlocale (LC_ALL, "portuguese");

    int numero, contadorPares = 0, contadorImpares = 0, somaPares = 0, somaImpares = 0;

    while (1) {
        printf("Digite um numero inteiro (ou um numero negativo para sair): ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        if (numero % 2 == 0) {
            contadorPares++;
            somaPares += numero;
        } else {
            contadorImpares++;
            somaImpares += numero;
        }
    }


    float mediaPares = (contadorPares > 0) ? (float)somaPares / contadorPares : 0;
    float mediaImpares = (contadorImpares > 0) ? (float)somaImpares / contadorImpares : 0;

 
    printf("Quantidade de numeros pares: %d\n", contadorPares);
    printf("Media dos numeros pares: %.2f\n", mediaPares);

    printf("Quantidade de numeros impares: %d\n", contadorImpares);
    printf("Media dos numeros impares: %.2f\n", mediaImpares);

    return 0;
}