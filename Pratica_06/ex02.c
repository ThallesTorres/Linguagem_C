// Exercício 02 - Crie uma matriz 4x4 com elementos aleatórios no intervalo [0, 20]: 
// a - Imprima todos os elementos de uma linha informada pelo usuário.
// b - Imprima todos os elementos de uma coluna informada pelo usuário.
// c - Imprima a soma dos elementos de uma linha informada pelo usuário.
// d - Imprima a soma dos elementos de uma coluna informada pelo usuário.
// e - Imprima a matriz transposta.

# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <time.h>


int linha(void) {

    printf("\n\033[33m------------------------------\033[m\n\n");

    return 0;

}


int main(void) {

    srand((unsigned) time(NULL));

    linha();

    printf("\033[32m## MATRIZ.\033[m\n");

    linha();

    int size_linha, size_coluna;

    printf("Tamanho da matriz (linhas): ");
    scanf("%i", &size_linha);

    printf("Tamanho da matriz (colunas): ");
    scanf("%i", &size_coluna);

    int matriz_main[size_linha][size_coluna];

    linha();

    int mostrar_linha, count_linha = 0;

    do {

        printf("Linha a ser mostrada e somada (1 até %i): ", size_linha);
        scanf("%i", &mostrar_linha);

        linha();

    } while (mostrar_linha < 1 || mostrar_linha > size_linha);

    int mostrar_coluna, count_coluna = 0;

    do {

        printf("Coluna a ser mostrada e somada (1 até %i): ", size_coluna);
        scanf("%i", &mostrar_coluna);

        linha();

    } while (mostrar_coluna < 1 || mostrar_coluna > size_coluna);

    // Preenchendo...
    for (int index_linha = 0; index_linha < size_linha; index_linha ++) {

        for (int index_coluna = 0; index_coluna < size_coluna; index_coluna ++) {

            matriz_main[index_linha][index_coluna] = rand() % 21;
        
        }

    }

    printf("Matriz criada:\n");
    int atual;

    for (int index_linha = 0; index_linha < size_linha; index_linha ++) {

        for (int index_coluna = 0; index_coluna < size_coluna; index_coluna ++) {

            atual = matriz_main[index_linha][index_coluna];

            printf("%s[%i]", (index_coluna == 0) ? " " : "\t", atual);

        }

        printf("\n");
    }

    linha();

    printf("Linha %i:", mostrar_linha);

    for (int index_coluna = 0; index_coluna < size_coluna; index_coluna ++) {

        atual = matriz_main[mostrar_linha - 1][index_coluna];

        printf(" [%i]", atual);
        count_linha += atual;

    }

    printf("\nSoma: %i\n", count_linha);

    linha();

    printf("Coluna %i:", mostrar_coluna);

    for (int index_linha = 0; index_linha < size_linha; index_linha ++) {

        atual = matriz_main[index_linha][mostrar_coluna - 1];

        printf(" [%i]", atual);
        count_coluna += atual;

    }

    printf("\nSoma: %i\n", count_coluna);

    linha();

    printf("Matriz transposta:\n");

    for (int index_coluna = 0; index_coluna < size_coluna; index_coluna ++) {

        for (int index_linha = 0; index_linha < size_linha; index_linha ++) {

            atual = matriz_main[index_linha][index_coluna];

            printf("%s[%i]", (index_linha == 0) ? " " : "\t", atual);

        }

        printf("\n");
    }

    linha();

    return 0;

}
