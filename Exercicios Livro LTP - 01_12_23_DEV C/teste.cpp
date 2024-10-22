#include <stdio.h>

int main()
{
  /* declaração das variáveis */
  int idade, ano;
  float altura;
  char nome[30];

  /* entrada de dados */

  /* mensagem ao usuário */
  printf("Digite o seu nome: ");
  scanf(" %s", nome); /* leitura do nome */

  /* mensagem ao usuário */
  printf("Digite a idade: ");
  scanf(" %d", &idade); /* leitura da idade */

  /* mensagem ao usuário */
  printf("Digite a altura: ");
  scanf(" %f", &altura); /* leitura da altura */

  /* processamento */

  /* cálculo do ano de nascimento */
  ano = 2022 - idade;

  /* saída de dados */

  printf(" \nO nome é: %c", nome[0]);
  printf(" \nA altura é: %.2f", altura);
  printf(" \nA idade é: %d", idade);
  printf(" \nO ano de nascimento é: %d ", ano);

  return (0);
}

