// Exercício 03 - Dado um número positivo n, imprimir seu quadrado.

#include <stdio.h>

int main(void) 
{
  int num;

  printf("Digite um número: ");
  scanf("%d", &num);

  printf("O quadrado de %d é %d. \n", num, num * num);

  return 0;
}