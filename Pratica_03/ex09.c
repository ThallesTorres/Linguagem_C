// Exercício 09 - Dado dois vetores, A e B, faça um programa em C que imprima 
// todos os elementos comuns aos dois vetores.

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

    int qtdA = 0, qtdB = 0;

    linha();

    printf("Quantidade de números a serem digitados no vetor A: ");
    scanf("%i", &qtdA);

    int vetorA[qtdA];

    linha();

    for (int count = 0; count < qtdA; count ++) {

        printf("Digite %i números [%i/%i]: ",qtdA, count + 1, qtdA);
        scanf("%i", &vetorA[count]);

    }

    linha(); 

    printf("Quantidade de números a serem digitados no vetor B: ");
    scanf("%i", &qtdB);

    int vetorB[qtdB];

    linha();

    for (int count = 0; count < qtdB; count ++) {

        printf("Digite %i números [%i/%i]: ",qtdB, count + 1, qtdB);
        scanf("%i", &vetorB[count]);

    }

    linha(); 

    int count_comum = 0, comum[qtdA];

    for (int countA = 0; countA < qtdA; countA ++) {

        for (int countB = 0; countB < qtdB; countB ++) {

            if (vetorA[countA] == vetorB[countB]) {

                int count_repetido = 0;

                for (int count = 0; count < count_comum; count ++) {

                    if (comum[count] == vetorA[countA]) {

                        count_repetido ++;

                    }

                }

                if (count_repetido <= 1) {

                    comum[count_comum] = vetorA[countA];
                    count_comum ++;

                } 

                // comum[count_comum] = vetorA[countA];
                // count_comum ++;

            }

        }

    }

    printf("Números em comum: ");

    for (int count = 0; count < count_comum; count ++) {

        printf("%i%s", comum[count], (count == count_comum - 1) ? "" : " | ");

    }

    printf("\n");

    linha();

    return 0;
}
