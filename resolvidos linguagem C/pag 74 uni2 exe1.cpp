// página 74 exe 01
// O código apresentado tem como função encontrar o maior e o menor número entre cinco números digitados pelo usuário.

#include <stdio.h>
int main()
{
int num;
int maior, menor, i; // de forma resumida, o "i" é usado para armazenar a posição atual dentro do loop "for". Essa posição indica qual número está sendo analisado para determinar se é maior ou menor que os outros.
printf ("Digite o 1º número: \n");
scanf ("%d", &num);
maior = num;
menor = num;
printf ("Digite o 2º número: \n");
scanf ("%d", &num);
if (num > maior)
maior = num;
if (num < menor)
menor = num;
printf ("Digite o 3º número: \n");
scanf ("%d", &num);
if (num > maior)
maior = num;
if (num < menor)
menor = num;
printf ("Digite o 4º número: \n");
scanf ("%d", &num);
if (num > maior)
maior = num;
if (num < menor)
menor = num;
printf ("Digite o 5º número: \n");
scanf ("%d", &num);
if (num > maior)
maior = num;
if (num < menor)
menor = num;
printf("O maior é %d\n", maior);
printf("O menor é %d\n", menor);
return (0);
}
