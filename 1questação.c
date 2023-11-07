#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale (LC_ALL, "portuguese");

   int temperatura;


    printf("Informe a temperatura: ");
    scanf("%d", &temperatura);


    if (temperatura >= 25) {
        printf("O clima está ensolarado! \n");
    } else if (temperatura < 15) {
        printf("O clima está chuvoso. \n");
    } else if (temperatura >= 15 && temperatura < 25) {
        printf("O clima está nublado. \n");
    }






    return 0;
}