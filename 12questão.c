#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale (LC_ALL, "portuguese");

    int quantidadeNotas, i;
    float nota, soma = 0, media;

 
    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidadeNotas);

    for (i = 1; i <= quantidadeNotas; ++i) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);

        soma += nota;
    }

    media = soma / quantidadeNotas;

    printf("A media das notas digitadas e: %.2f\n", media);

    return 0;
}