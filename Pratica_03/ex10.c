// Exercício 07 - Leia uma vetor de 8 posições e troque os 4 primeiros valores pelos 
// 4 últimos e vice e versa. Escreva ao final o vetor obtido.

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

    int vetor_trocado[qtd + 1], metade = (1 + qtd) / 2;

    for (int first = 0, last = metade; first < metade; first ++, last ++) {
        vetor_trocado[first] = vetor[last];
        vetor_trocado[last] = vetor[first];

    }

    printf("Trocados: ");

    for (int count = 0; count < qtd; count ++) {

        printf("%i%s", vetor_trocado[count], (count == qtd - 1) ? "\n" : " | ");
    }

    linha();

    return 0;
}
