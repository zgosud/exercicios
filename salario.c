/*lculo de um salario líquido de um professor . Serão fornecidos valor da hora aula, numero
de aulas dadas e o % de desconto do INSS.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
float vha,nad,inss, salario, desconto;
printf("Informe o valor da hora aula: ");
scanf("%f",&vha);
printf("Informe o numero de aulas dadas: ");
scanf("%f",&nad);
printf("Informe o valor do percentual de desconto do INSS: ");
scanf("%f",&inss);
salario = vha * nad;
desconto = salario * inss /100;
printf("\n\nSalario liquido e: %3.2f\n\n",salario - desconto);
return 0;
}