#include <stdio.h>

int main()
{
  /* declara��o das vari�veis */
  int idade, ano;
  float altura;
  char nome[30];

  /* entrada de dados */

  /* mensagem ao usu�rio */
  printf("Digite o seu nome: ");
  scanf(" %s", nome); /* leitura do nome */

  /* mensagem ao usu�rio */
  printf("Digite a idade: ");
  scanf(" %d", &idade); /* leitura da idade */

  /* mensagem ao usu�rio */
  printf("Digite a altura: ");
  scanf(" %f", &altura); /* leitura da altura */

  /* processamento */

  /* c�lculo do ano de nascimento */
  ano = 2022 - idade;

  /* sa�da de dados */

  printf(" \nO nome �: %c", nome[0]);
  printf(" \nA altura �: %.2f", altura);
  printf(" \nA idade �: %d", idade);
  printf(" \nO ano de nascimento �: %d ", ano);

  return (0);
}

