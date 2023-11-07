#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){

setlocale (LC_ALL, "portuguese");

int opcion;



printf("Lu lu lu lu lu lu lu lu \n");
printf("1 - Novo jogo \n");
printf("2 - Carregar jogo \n");
printf("3 - Configurações \n");
scanf ("%d", &opcion);

switch (opcion)
{
case 1:
   printf("Iniciando o Jogo... \n");
    break;
    case 2:
   printf("Selecione o Save \n");
    printf("Slot 01 \n");
     printf("Slot 02 \n");
       printf("Slot 03 \n");
        printf("Slot 04 \n");
    break;
    case 3:
   printf("Idioma \n");
   printf("Configurações de Jogo \n");
   printf("Tela \n");
   printf("Brilho \n");
   printf("Som \n");
   printf("Controles \n");
   printf("Câmera \n");
    break;

default: 
printf("Opção invalida!");
    break;
}




    return 0;
}