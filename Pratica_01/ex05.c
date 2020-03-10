// Exercício 05 - Dado um número inteiro positivo n verificar se é par ou ímpar. Apresente uma 
// mensagem na tela informando o número e o resultado.

#include <stdio.h>

int main(void) 
{
  int num;
  char resultado;


  printf("Digite um número: ");
  scanf("%d", &num);
/*
  if (num % 2 != 0) 
  {
    printf("O número %d é ÍMPAR. \n", num);
  }

  else 
  {
    printf("O número %d é PAR. \n", num);
  }
*/
  printf("O número %d é %s. \n", num, (num % 2 == 0) ? "PAR" : "ÍMPAR");

  return 0;
}