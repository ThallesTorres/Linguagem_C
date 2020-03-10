// Exercício 04 - Faça um programa que solicite o ano em que uma pessoa nasceu e retorne sua idade.

#include <stdio.h>

int main(void) 
{
  int ano;

  printf("Ano de Nascimento: ");
  scanf("%d", &ano);

  printf("Quem nasceu em %d tem %d anos. \n", ano, 2020 - ano);

  return 0;
}