// Exercício 04 - Faça um programa que solicite o ano em que uma pessoa nasceu e retorne sua idade.

#include <stdio.h>

int main(void) 
{
  int ano, idade;

  printf("Ano de Nascimento: ");
  scanf("%d", &ano);

  idade = 2020 - ano;

  printf("Quem nasceu em %d tem %d anos. \n", ano, idade);

  return 0;
}