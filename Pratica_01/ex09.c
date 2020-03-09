// Exercício 09 - Crie um programa por meio do qual o usuário irá digitar a operação desejada e 
// dois valores, ao final deverá ser exibido o resultado da operação. 
// Opções disponíveis: 1 – Divisão; 2 – resto da divisão; 3 – adição; 4 – multiplicação.

#include <stdio.h>

int main(void) 
{
  int escolha;
  int n1, n2, resultado;

  do 
  {
    printf("Escolha a operação desejada: \n[ 1 ] - Divisão \n[ 2 ] - Resto da Divisão \n[ 3 ] - Adição \n[ 4 ] - Multiplicação \n"); 
    scanf("%d", &escolha);
  }
  while (escolha > 5 || escolha < 0);

  printf("Digite o 1° número: ");
  scanf("%d", &n1);

  printf("Digite o 2° número: ");
  scanf("%d", &n2);

  switch (escolha)
  {
    case 1 :
    resultado = n1 / n2;
    break;

    case 2 :
    resultado = n1 % n2;
    break;

    case 3 :
    resultado = n1 + n2;
    break;

    case 4 :
    resultado = n1 * n2;
    break;
  }

  printf("Resultado = %d \n", resultado);

  return 0;
}