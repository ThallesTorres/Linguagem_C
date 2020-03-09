// Exercício 02 - Faça um programa que solicite um número (inteiro/positivo) e imprima-o.

#include <stdio.h>

int main(void) 
{
  int num;

  printf("Digite um número: ");
  scanf("%d", &num);

  printf("Número digitado: %d \n", num);
  
  return 0;
}