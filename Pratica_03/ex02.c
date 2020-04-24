// Exercício 02 - Escreva um programa principal que:
// a - Leia 10 números (vetor inteiros) a partir de valores digitados pelo usuário.
// b - Imprima na tela apenas os valores maior que 20.

# include <stdio.h>

int main(void) {
    int x[10], a = 0;

    for (int count = 0; count <= 9; count ++) {
        printf("Digite 10 números [%i/10]: ", count + 1);
        scanf("%i", &x[count]);
    }

    printf("Valores digitados: ");

    for (int count = 0; count <= 9; count ++) {
        printf("%i%s", x[count], (count == 9) ? "\n" : " | ");
    }

    printf("Maiores que 20:");

    for (int count = 0; count <= 9; count ++) {
        if (x[count] > 20) {
            printf("%s%i", (a == 0) ? " " : " | ", x[count]);
            a += 1;
        }
    }
    printf("\n");

    return 0;
}