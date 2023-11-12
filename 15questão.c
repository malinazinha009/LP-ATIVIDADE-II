#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){

setlocale (LC_ALL, "portuguese");

int escolha;
    float valor, resultado;

    while (1) {
        printf("Escolha uma opcao de conversao:\n");
        printf("1. Quilometros para Milhas\n");
        printf("2. Celsius para Fahrenheit\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &escolha);

    
        switch (escolha) {
            case 1:
             
                printf("Digite a quantidade em quilometros: ");
                scanf("%f", &valor);
                resultado = valor * 0.621371;
                printf("%.2f quilometros equivalem a %.2f milhas.\n", valor, resultado);
                break;
            case 2:
       
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &valor);
                resultado = valor * 9 / 5 + 32;
                printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", valor, resultado);
                break;
            case 0:
    
                printf("Obrigado por usar o programa. Ate logo!\n");
                return 0;
            default:
        
                printf("Opcao invalida. Tente novamente.\n");
        }
    }

    return 0;
}