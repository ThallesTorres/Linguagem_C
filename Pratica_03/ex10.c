// Exercício 10 - Suponha um vetor N com 10 elementos e outro vetor M com 10 elementos. 
// Faça um programa em C que calcule o produto escalar P de A por B. (Isto é, 
// P = A[1] * B[1] + A[2] * B[2] + ... A[N] + B[N]).

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

    int vetorN[qtd], vetorM[qtd];

    linha();

    printf("        \033[31mVetor N\033[m\n");

    for (int count = 0; count < qtd; count ++) {

        printf("Digite %i números [%i/%i]: ",qtd, count + 1, qtd);
        scanf("%i", &vetorN[count]);

    }

    linha(); 

    printf("        \033[31mVetor M\033[m\n");

    for (int count = 0; count < qtd; count ++) {

        printf("Digite %i números [%i/%i]: ",qtd, count + 1, qtd);
        scanf("%i", &vetorM[count]);

    }

    linha();

    int produto = 0;

    for (int count = 0; count < qtd; count ++) {

        produto += vetorN[count] * vetorM[count];

    }

    printf("Produto Escalar de N por M: %i\n", produto);

    linha();

    return 0;
}
