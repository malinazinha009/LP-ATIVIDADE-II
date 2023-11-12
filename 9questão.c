#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale (LC_ALL, "portuguese");

 int numero;
 int i;
 int ehPrimo ; 

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);


    if (numero < 2) {
        ehPrimo = 0; 
    } else {
    
        for (i = 2; i <= numero / 2; ++i) {
            if (numero % i == 0) {
                ehPrimo = 0; 
                break;
            }
        }
    }

    
    switch (ehPrimo) {
        case 1:
            printf("Numero primo\n");
            break;
        default:
            printf("Numero nao primo\n");
    }

    return 0;
}