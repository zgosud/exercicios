/*Receber do teclado um nome e imprimir tantas vezes quantos forem seus caracteres.*/
#include <stdio.h>
#include <math.h>
#include <string.h>
main()
{
int x,tam;
char nome[30];
printf("Digite um nome: ");
gets(nome);
tam = strlen(nome);
for (x=1; x <= tam; x++)
printf("\n%s",nome);
printf("\n\n");
return 0;
}