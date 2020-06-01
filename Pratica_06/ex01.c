// Exercício 01 - Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e 
// com 0 os demais elementos. Escreva ao final a matriz obtida.

# include <stdio.h>
# include <string.h>


int linha(void) {

    printf("\n\033[33m------------------------------\033[m\n\n");

    return 0;

}


int main(void) {

    linha();

    printf("\033[32m## MATRIZ IDENTIDADE.\033[m\n");

    linha();

    int size;

    printf("Tamanho da matriz identidade: ");
    scanf("%i", &size);

    int size_linha = size, size_coluna = size;
    int matriz_main[size_linha][size_coluna];

    linha();

    int ordenacao;

    do {
        printf("Escolha a ordenação: \n  1 - Diagonal Principal (para baixo) \n  2 - Diagonal Secundária (para baixo) \nOpção: ");
        scanf("%i", &ordenacao);

        linha();

    } while (ordenacao != 1 && ordenacao != 2);

    // Preenchendo
    int count = (ordenacao == 2) ? size_linha - 1 : 0;

    for (int index_linha = 0; index_linha < size_linha; index_linha ++) {

        for (int index_coluna = 0; index_coluna < size_coluna; index_coluna ++) {

            matriz_main[index_linha][index_coluna] = (count == index_coluna) ? 1 : 0;
        }

        count = (ordenacao == 2) ? count - 1 : count + 1;
    }

    // Mostrando
    int atual;

    for (int index_linha = 0; index_linha < size_linha; index_linha ++) {

        for (int index_coluna = 0; index_coluna < size_coluna; index_coluna ++) {

            atual = matriz_main[index_linha][index_coluna];

            printf("%s", (atual == 0) ? "\033[31m" : "\033[33m");
            printf(" [%i]", atual);
        }

        printf("\n\033[m");
    }

    linha();

    return 0;

}
