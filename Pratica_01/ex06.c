// Exercício 06 - Dados três números, imprimi-los em ordem crescente.

#include <stdio.h>

int main(void) 
{
  int n1, n2, n3;

  printf("Digite o 1° número: ");
  scanf("%d", &n1);

  printf("Digite o 2° número: ");
  scanf("%d", &n2);

  printf("Digite o 3° número: ");
  scanf("%d", &n3);
  
  printf("Os números digitados em ordem crescente ficam: ");

  if (n1 < n2 && n2 < n3) 
  {
    printf("%d %d %d", n1, n2, n3);
  }

  else if (n1 < n3 && n3 < n2) 
  {
    printf("%d %d %d", n1, n3, n2);
  }

  else if (n2 < n1 && n1 < n3) 
  {
    printf("%d %d %d", n2, n1, n3);
  }

  else if (n2 < n3 && n3 < n1) 
  {
    printf("%d %d %d", n2, n3, n1);
  }

  else if (n3 < n2 && n2 < n1) 
  {
    printf("%d %d %d", n3, n2, n1);
  }

  else if (n3 < n1 && n1 < n2) 
  {
    printf("%d %d %d", n3, n1, n2);
  }

  printf("\n");
  
  return 0;
}