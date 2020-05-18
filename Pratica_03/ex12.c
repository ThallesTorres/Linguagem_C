// Exercício 12 - Leia um vetor de 10 posições e elimine as posições com valor zero avançando uma posição, com os valores subsequentes do vetor. Dessa forma todos "zeros" devem ficar para as posições finais do vetor.

# include <stdio.h>


int linha(void) {

    char x = '-';

    printf("\n\033[33m");

    for (int count = 0; count < 30; count ++) {

        printf("%c", x);

    }

    printf("\033[m\n\n");

    return 0;

}


int main (void) {

    int qtd = 0;

    linha();

    printf("\033[32m## ELIMINANDO OS ZEROS.\033[m\n");

    linha();

    printf("Quantidade de números a serem digitados: ");
    scanf("%i", &qtd);

    int vetor[qtd * 2];

    linha();

    for (int count = 0; count < qtd; count ++) {

        printf("Digite %i números [%i/%i]: ",qtd, count + 1, qtd);
        scanf("%i", &vetor[count]);

    }

    linha();

    for (int count = 0, zeros = 0; count < qtd; count ++) {

        vetor[qtd + count] = 0;

        while ((vetor[count + zeros] == 0) && (count + zeros <= qtd)) {

            zeros ++;

        }

        vetor[count] = vetor[count + zeros];

    }

    printf("Vetor: ");

    for (int count = 0; count < qtd; count ++) {

        printf("%i%s", vetor[count], (count == qtd - 1) ? "\n" : " | ");

    }

    linha();

    return 0;

}