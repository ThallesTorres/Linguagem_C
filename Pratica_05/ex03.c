// Exercício 32 - Faça uma função que leia uma string de 50 posições digitada por um usuário, e retorne valor 1 se for um palíndromo ou 0 em caso negativo.

# include <stdio.h>
# include <string.h>


int linha(void) {

    printf("\n\033[33m------------------------------\033[m\n\n");

    return 0;

}


int palindromo(char string[51]) {

    int count = 0;

    for (int decrescente = strlen(string), crescente = 0; decrescente != 0; decrescente --, crescente ++) {

        if (string[crescente] != string[decrescente -1]) {

            count ++;

        }

    }

    return (count == 0) ? 1 : 0;

}


int main(void) {

    char string[51];

    linha();

    printf("Digite algo: ");
    gets(string);

    linha();

    printf("'%s'%s é um palíndromo.\n", string, (palindromo(string) == 1) ? "" : " não");

    linha();

    return 0;

}
