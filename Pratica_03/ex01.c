// Exercício 01 - Escreva um programa principal que: 
// a - Leia 10 números (vetor inteiros) a partir de valores digitados pelo usuário.
// b - Imprima na tela os 10 números.

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


int criar_vetor(void) {
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

    for (int count = 0; count < qtd ; count ++) {

        printf("%i%s", vetor[count], (count == qtd - 1) ? "\n" : " | ");

    }

    linha();

    return 0;
}
