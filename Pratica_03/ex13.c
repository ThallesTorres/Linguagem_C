// Exercício 13 - Dada uma sequência de n números reais, determinar o número de vezes que cada um deles ocorre na mesma.

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


int main (void) {

    int qtd = 0;

    linha();

    printf("\033[32m## CONTANDO VALORES REPETIDOS.\033[m\n");

    linha();

    printf("Quantidade de números a serem digitados: ");
    scanf("%i", &qtd);

    float vetor[qtd];

    linha();

    for (int count = 0; count < qtd; count ++) {

        printf("Digite %i números [%i/%i]: ",qtd, count + 1, qtd);
        scanf("%f", &vetor[count]);

    }

    linha();

    for (int count = 0; count < qtd; count ++) {

        int repete = 1, temp_count = count + 1;

        while (temp_count < qtd) {

            if (vetor[count] == vetor[temp_count]) {

                repete ++;
                qtd --;
                vetor[temp_count] = vetor[qtd];

            }

            else {

                temp_count ++;

            }
        }

        printf("%.2f ocorre %i vezes\n", vetor[count], repete);

    }

    linha();

    return 0;

}
