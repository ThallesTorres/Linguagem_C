// Exercício 08 - Inicialize um vetor de 10 posições e em seguida leia um valor X qualquer. Seu programa devera fazer uma busca do valor de X no vetor lido e informar a posição em que foi encontrado ou se não foi encontrado.

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

    int busca = 0, count_busca = 0, lugar_busca[qtd];

    printf("Número a ser buscado: ");
    scanf("%i", &busca);

    for (int count = 0; count < qtd; count ++) {

        if (vetor[count] == busca) {

            lugar_busca[count_busca] = count;
            count_busca ++;

        }

    }

    linha();

    printf("Total de números %i encontrados na lista digitada: %i\n", busca, count_busca);
    printf("Lugares da lista em que foram encontrados: %s\n", lugar_busca);

    linha();

    return 0;
}
