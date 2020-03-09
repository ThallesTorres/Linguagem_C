// Exercício 07 - Calcular o fatorial de um número fornecido pelo usuário. A função fatorial de 
// um número natural n é o produto de todos os n primeiros números naturais.

#include <stdio.h>

int main(void) 
{
  int num, count, resp;
  resp = 1;

  printf("Digite um número: ");
  scanf("%d", &num);

  printf("Fatorial de %d é: \n", num);

  for (count = 1; count <= num; count ++)
  {
    resp *= count;
    printf("%d ", count);
  }

  printf("= %d \n", resp);

  return 0;
}