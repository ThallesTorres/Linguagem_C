// Exercício 05 - Faça um programa (main) que popule o vetor de 5 posições com 
// 0 ou 1 e chame a função e exiba o resultado (base decimal).

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

    char *nome;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Seu nome: ");

    for (int count = 0; count != 4; count ++) {
        printf("%i - %c\n", count, nome[count]);
    }

    // printf("COMEÇANDO...\n");
    // for (int count = 0; count != 0; count ++) {
    //     printf("VEIO PARA O FOR...");
    // }

    return 0;
}
