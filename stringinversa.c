/*- Receber um nome do teclado e imprimí-lo de trás pra frente.*/
#include <stdio.h>
#include <string.h>
main()
{
int x,y,tam;
char nome[30];
printf("Digite uma palavra: ");
gets(nome);
tam = strlen(nome);
printf("\n A palavra de tras pra frente e: ");
for (x=tam-1; x >= 0; x--)
printf("%c",nome[x]);
printf("\n\n");
return 0;
}