// Exercício 06 - Dada uma sequência de n números, imprimi-la na ordem inversa a da leitura.

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


int inverso(int qtd) {

    int vetor[qtd];

    for (int count = 0; count < qtd; count ++) {

        printf("Digite %i números [%i/%i]: ", qtd, count + 1, qtd);
        scanf("%i", &vetor[count]);

    }

    linha();

    printf("Valores digitados (invertidos): ");

    for (int count = qtd - 1; count >= 0; count --) {

        printf("%i%s", vetor[count], (count == 0) ? "\n" : " | ");

    }

    return 0;
}


int main(void) {

    int qtd = 0;

    linha();

    printf("\033[32m## LENDO E IMPRIMINDO (INVERTIDOS).\033[m\n");

    linha();

    printf("Quatidade de números a serem digitados: ");
    scanf("%i", &qtd);

    linha();

    inverso(qtd);

    linha();

    return 0;
}
