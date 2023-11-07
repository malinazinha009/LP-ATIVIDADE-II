#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){

setlocale (LC_ALL, "portuguese");

int opcion;



printf("Escolha um idioma de preferência \n");
printf("1 - Inglês \n");
printf("2 - Espanhol \n");
printf("3 - Francês \n");
scanf ("%d", &opcion);

switch (opcion)
{
case 1:
   printf("Welcome!");
    break;
    case 2:
   printf("Sea bienvenido!");
    break;
    case 3:
   printf("Accueillir!");
    break;

default: 
printf("Opção invalida!");
    break;
}





    return 0;
}
