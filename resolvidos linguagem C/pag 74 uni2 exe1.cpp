// p�gina 74 exe 01
// O c�digo apresentado tem como fun��o encontrar o maior e o menor n�mero entre cinco n�meros digitados pelo usu�rio.

#include <stdio.h>
int main()
{
int num;
int maior, menor, i; // de forma resumida, o "i" � usado para armazenar a posi��o atual dentro do loop "for". Essa posi��o indica qual n�mero est� sendo analisado para determinar se � maior ou menor que os outros.
printf ("Digite o 1� n�mero: \n");
scanf ("%d", &num);
maior = num;
menor = num;
printf ("Digite o 2� n�mero: \n");
scanf ("%d", &num);
if (num > maior)
maior = num;
if (num < menor)
menor = num;
printf ("Digite o 3� n�mero: \n");
scanf ("%d", &num);
if (num > maior)
maior = num;
if (num < menor)
menor = num;
printf ("Digite o 4� n�mero: \n");
scanf ("%d", &num);
if (num > maior)
maior = num;
if (num < menor)
menor = num;
printf ("Digite o 5� n�mero: \n");
scanf ("%d", &num);
if (num > maior)
maior = num;
if (num < menor)
menor = num;
printf("O maior � %d\n", maior);
printf("O menor � %d\n", menor);
return (0);
}
