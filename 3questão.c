#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale (LC_ALL, "portuguese");

    int nota;

    printf("Digite a sua nota: ");
    scanf("%d", &nota);

    if (nota >= 9) {
        printf("Excelente! \n");
    } else if (nota >= 7 && nota < 9) {
        printf("Bom! \n");
    } else if (nota >= 5 && nota < 7) {
        printf("Razoavel. \n");
    } else if (nota < 5) { 
        printf("Insuficiente. \n");
    }

    return 0;
}