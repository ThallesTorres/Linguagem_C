// Exercício 03 - Dado um número positivo n, imprimir seu quadrado.

#include <stdio.h>

int main(void) 
{
  int num, quadrado;

  printf("Digite um número: ");
  scanf("%d", &num);

  quadrado = num * num;

  printf("O quadrado de %d é %d \n", num, quadrado);

  return 0;
}