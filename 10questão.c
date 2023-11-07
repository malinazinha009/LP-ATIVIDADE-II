#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){

setlocale (LC_ALL, "portuguese");


int operacao;
int y;
int x;
int soma = 0;
int subtracao = 0;

printf ("Informe um número: ");
scanf ("%d", &x);
printf ("Informe um número: ");
scanf ("%d", &y);

soma = x + y;
subtracao = x - y;


printf ("\n Informe a operação desejada: ");
printf ("\n 1 - Adição ");
printf ("\n 2 - Subtração ");
scanf ("%d", &operacao);


switch (operacao)
{
case 1:
   printf("Resultado: %d", soma);
    break;
    case 2:
 printf("Resultado: %d", subtracao);
    break;

default: 
printf("Opção invalida!");
    break;
}






    return 0;
}