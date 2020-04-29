// Exercício 02 - Escreva um programa principal que:
// a - Leia 10 números (vetor inteiros) a partir de valores digitados pelo usuário.
// b - Imprima na tela apenas os valores maior que 20.

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


int main(void) {

    int qtd = 0;

    linha();

    printf("Quantidade de números a serem digitados: ");
    scanf("%i", &qtd);

    int vetor[qtd];

    linha();

    for (int count = 0; count < qtd; count ++) {

        printf("Digite %i números [%i/%i]: ",qtd, count + 1, qtd);
        scanf("%i", &vetor[count]);

    }

    linha();

    printf("Valores digitados: ");

    for (int count = 0; count <= qtd - 1; count ++) {

        printf("%i%s", vetor[count], (count == qtd - 1) ? "\n" : " | ");

    }

    linha();

    printf("Maiores que 20:");

    for (int count = 0, a = 0; count < qtd; count ++, a ++) {

        if (vetor[count] > 20) {

            printf("%s%i", (a == 0) ? " " : " | ", vetor[count]);

        }

    }

    printf("\n");

    linha();

    return 0;

}
