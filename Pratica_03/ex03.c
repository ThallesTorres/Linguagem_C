// Exercício 03 - Escreva um programa principal que:
// a - Leia 10 números (vetor inteiros) a partir de valores digitados pelo usuário. Apenas armazene no vetor os números pares.
// b - Imprima na tela a quantidade de valores armazenados no vetor, o maior valor encontrado e também a média desses valores.

# include <stdio.h>

int linha(void) {

    char x = '-';

    printf("\n");

    for (int count = 0; count < 30; count ++) {

        printf("%c", x);

    }

    printf("\n\n");

    return 0;

}


int main(void) {

    int x[9], count_geral = 0, maior = 0;
    float soma = 0;

    linha();

    for (int temp = 0, count = 0; count <= 9; count ++) {

        printf("Digite 10 números [%i/10]: ", count + 1);
        scanf("%i", &temp);

        if (temp % 2 == 0) {

            x[count_geral] = temp;
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

    for (int count = 0; count <= count_geral - 1; count ++) {

        printf("%i%s", x[count], (count == count_geral - 1) ? "\n" : " | ");

    }

    linha();

    printf("Quantidade de valore PARES: %i\n", count_geral);

    printf("Maior valor PAR: %i\n", maior);

    printf("Média dos valores PARES: %.1f\n", soma / count_geral);

    linha();

    return 0;
    
}