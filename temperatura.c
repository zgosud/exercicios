
/*Ler temperatura em graus Celsius e transformá-la em graus Fahrenheit.
Formula: F = (9*C+160)/5*/
#include <stdio.h>
#include <stdlib.h

main()
{
int tgc;
printf("Informe temperatura em graus Celsius: ");
scanf("%d",&tgc);
printf("\n%d graus Celsius corresponde a %3.2f graus Farenheit: \n\n", tgc, float(9*tgc+160)/5);
return 0;
}