#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){

int idade;



printf ("Infome sua idade: ");
scanf ("%d", &idade);



if (idade >= 18){
   printf("Acesso permitido.");
}else{
    printf("Acesso negado.");
}



    return 0;
}