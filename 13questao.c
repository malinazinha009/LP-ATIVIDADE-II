#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main() {

    setlocale (LC_ALL, "portuguese");

 int x;
 int y;

printf("Digite um número: ");
scanf("%d", &x);

printf("Digite um número: ");
scanf("%d", &y);

if (x > y) {
printf("%d é o maior numero.\n", x);
printf("%d é o menor numero.\n", y);

}else if (y > x){

printf("%d é o maior numero.\n", y);
printf("%d é o menor numero.\n", x);

}


    return 0;
}