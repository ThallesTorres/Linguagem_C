// Exercício 08 - Inicialize um vetor de 10 posições e em seguida leia um valor X qualquer. 
// Seu programa devera fazer uma busca do valor de X no vetor lido e informar a posição em que 
// foi encontrado ou se não foi encontrado.

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

    printf("\033[32m## BUSCANDO NO VETOR.\033[m\n");

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

    printf("Quantidade de número %i encontrados: %i\n", busca, count_busca);

    if (count_busca != 0) {

        printf((count_busca > 1) ? "Sendo encontrados nas posições " : "Sendo encontrado na posição ");

        for (int count = 0; count < count_busca; count ++) {

            printf("(%i) ", lugar_busca[count]);
        }

        printf("do vetor.\n");

    }

    linha();

    return 0;
}
