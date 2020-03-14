/* Exercício 04 - Escreva uma função que recebes 3 valores inteiros e positvos X, Y e Z e que verifique 
   se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar qual o 
   tipo de triângulo formado.
    • o Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
    • o Triângulo Isósceles: os comprimentos de 2 lados são iguais.
    • o Triângulo Escaleno: os comprimentos dos 3 lados são diferentes. */

# include <stdio.h>

int main (void)
{
  int n1, n2, n3;

  int triangulo(int n1, int n2, int n3);

  printf("Digite o 1° valor: ");
  scanf("%d", &n1);

  printf("Digite o 2° valor: ");
  scanf("%d", &n2);

  printf("Digite o 3° valor: ");
  scanf("%d", &n3);

  printf("O triângulo é ");
  triangulo(n1, n2, n3);
}

int triangulo(int n1, int n2, int n3)
{/*
  if (n1 == n2 && n2 == n3)
  {
    printf("EQUILÁTERO. \n");
  }
  else if (n1 == n2 || n1 == n3 || n2 == n3)
  {
    printf("ISÓSCELES. \n");
  }
  else
  {
    printf("ESCALENO. \n");
  }
*/
  (n1 == n2 && n2 == n3) 
  ?
  printf("EQUILÁTERO. \n")
  :
  (n1 == n2 || n1 == n3 || n2 == n3)
  ?
  printf("ISÓSCELES. \n")
  :
  printf("ESCALENO. \n");
}