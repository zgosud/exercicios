/*Ler um número inteiro e imprimir seu quadrado.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
float a;
printf("Informe um numero inteiro: ");
scanf("%f",&a);
printf("O quadrado do numero informado e: %3.0f\n\n",pow(a,2));
// para usar a potencia, usa-se pow(numero, potencia)
return 0;
}