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

    printf("Quantidade de números a serem digitados nos vetores: ");
    scanf("%i", &qtd);

    int vetorA[qtd], vetorB[qtd];

    linha();

    printf("        \033[31mVetor A\033[m\n");

    for (int count = 0; count < qtd; count ++) {

        printf("Digite %i números [%i/%i]: ",qtd, count + 1, qtd);
        scanf("%i", &vetorA[count]);

    }

    linha(); 

    printf("        \033[31mVetor B\033[m\n");

    for (int count = 0; count < qtd; count ++) {

        printf("Digite %i números [%i/%i]: ",qtd, count + 1, qtd);
        scanf("%i", &vetorB[count]);

    }

    linha();

    int produto = 0;

    for (int count = 0; count < qtd; count ++) {

        produto += vetorA[count] * vetorB[count];

    }

    printf("Produto Escalar de A por B: %i\n", produto);

    linha();

    return 0;
}
