// Exercício 03 - Escreva um programa principal que:
// a - Leia 10 números (vetor inteiros) a partir de valores digitados pelo usuário. Apenas armazene no vetor os números pares.
// b - Imprima na tela a quantidade de valores armazenados no vetor, o maior valor encontrado e também a média desses valores.

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

    int count_geral = 0, maior = 0, qtd = 0;
    float soma = 0;

    linha();

    printf("\033[32m## ANALISANDO O VETOR.\033[m\n");

    linha();

    printf("Quantidade de números a serem digitados: ");
    scanf("%i", &qtd);

    int vetor[qtd];

    linha();

    for (int temp = 0, count = 0; count < qtd; count ++) {

        printf("Digite %i números [%i/%i]: ",qtd, count + 1, qtd);
        scanf("%i", &temp);

        if (temp % 2 == 0) {

            vetor[count_geral] = temp;
            count_geral ++;
            soma += temp;

            if (maior < temp) {

                maior = temp;

            }

        }

        temp = 0;

    }

    linha();

    printf("Valores PARES digitados: ");

    for (int count = 0; count < count_geral; count ++) {

        printf("%i%s", vetor[count], (count == count_geral - 1) ? "\n" : " | ");

    }

    linha();

    printf("Quantidade de valores PARES: %i\n", count_geral);

    printf("Maior valor PAR: %i\n", maior);

    printf("Média dos valores PARES: %.1f\n", soma / count_geral);

    linha();

    return 0;
    
}
