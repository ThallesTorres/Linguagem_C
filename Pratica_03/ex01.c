// Exercício 01 - Escreva um programa principal que: 
// a - Leia 10 números (vetor inteiros) a partir de valores digitados pelo usuário.
// b - Imprima na tela os 10 números.

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
    int x[9];

    linha();

    for (int count = 0; count <= 9; count ++) {
        printf("Digite 10 números [%i/10]: ", count + 1);
        scanf("%i", &x[count]);
    }

    linha();

    printf("Valores digitados: ");

    for (int count = 0; count <= 9; count ++) {
        printf("%i%s", x[count], (count == 9) ? "\n" : " | ");
    }

    linha();

    return 0;
}