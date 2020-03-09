// Exercício 08 - Calcular a tabuada de um número fornecido pelo usuário multiplicado de 0 a 12.

#include <stdio.h>

int main(void) 
{
  int num, count;

  printf("Digite um número: ");
  scanf("%d", &num);

  for (count = 0; count <= 12; count ++)
  {
    printf("%d x %d = %d\n", num, count, num * count);
  }

  printf("\n");

  return 0;
}