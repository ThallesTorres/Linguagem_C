// Exercício 01 - Dado dois número inteiro positivo n, calcular e imprimir a sua soma.

#include <stdio.h>

int main(void) 
{
  int n1, n2, resp;

  printf("Digite o 1° número: ");
  scanf("%d", &n1);

  printf("Digite o 2° número: ");
  scanf("%d", &n2);

  resp = n1 + n2;

  printf("A soma entre %d e %d é %d \n", n1, n2, resp);

  return 0;
}

