#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale (LC_ALL, "portuguese");

float valorCompra;
float desconto = 0;
char diaSemana;


    printf("Digite o valor da compra: R$ ");
    scanf("%f", &valorCompra);

    printf("Digite o dia da semana (D para dia de semana, S para fim de semana): ");
    scanf(" %c", &diaSemana);


    if (valorCompra > 100) {
        if (diaSemana == 'D' || diaSemana == 'd') {
            desconto = valorCompra * 0.10;
        } else if (diaSemana == 'S' || diaSemana == 's') {
            desconto = valorCompra * 0.15;
        }
    }

    float valorFinal = valorCompra - desconto;

    printf("Valor da compra: R$ %.2f\n", valorCompra);
    printf("Desconto aplicado: R$ %.2f\n", desconto);
    printf("Valor final com desconto: R$ %.2f\n", valorFinal);

    return 0;
}