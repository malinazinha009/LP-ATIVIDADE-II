#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){

setlocale (LC_ALL, "portuguese");


char senhacorreta[500] = "agag";
char senha[500];

while (1){
 printf("Insira o codigo de segurança. ");
 scanf("%s", senha);



if (strcmp (senha, senhacorreta) == 0){
    printf ("Acesso permitido!");
    break;
} else {
printf ("Codigo incorreto. \n");
 }
}



    return 0;
}