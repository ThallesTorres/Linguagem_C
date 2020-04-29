// Exercício 07 - Leia uma vetor de 8 posições e troque os 4 primeiros valores pelos 
// 4 últimos e vice e versa. Escreva ao final o vetor obtido.

# include <stdio.h>

int vetor_trocado[8]; // Perguntar para a professora, como que se retorna um vetor...


int linha(void) {

    char x = '-';

    printf("\n\033[33m");

    for (int count = 0; count < 30; count ++) {

        printf("%c", x);

    }

    printf("\033[m\n\n");

    return 0;

}


int vetor_troca(int vetor[8]) {

    for (int first = 0, last = 4; first <= 3; first ++, last ++) {
        vetor_trocado[first] = vetor[last];
        vetor_trocado[last] = vetor[first];

    }

    return 0;
}


int main(void) {

    int vetor[8];

    linha();

    for (int count = 0; count < 8; count ++) {

        printf("Digite 8 números [%i/8]: ", count + 1);
        scanf("%i", &vetor[count]);

    }

    linha();

    vetor_troca(vetor);

    linha();

    printf("Trocados: ");

    for (int count = 0; count < 8; count ++) {

        printf("%i%s", vetor_trocado[count], (count == 7) ? "\n" : " | ");
    }

    linha();

    return 0;
}
