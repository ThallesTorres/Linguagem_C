// Exercício 01 - Criar um programa que solicita no teclado uma frase com, no máximo, 100 letras. Se o tamanho for maior que 40, exibir uma mensagem e solitar novamente a frase, senão, imprimir a frase na vertical.

# include <stdio.h>
# include <string.h>


int linha(void) {

    printf("\n\033[33m------------------------------\033[m\n\n");

    return 0;

}


int main (void) {

    char frase[101];
    int frase_len;

    linha();

    printf("\033[32m## MENOR QUE 40 DIGITOS.\033[m\n");

    do {

        linha();

        printf("Digite uma frase: ");
        gets(frase);

        linha();

        frase_len = strlen(frase);

        if (frase_len > 40) {

            printf("\033[31mFrase com mais de 40 digitos.\nPor favor digite uma nova frase.\033[m\n");
            
            }

    } while (frase_len > 40);

    for (int index = 0; frase[index] != '\0'; index ++) {

        printf("%c\n", frase[index]);

    }

    linha();

    return 0;

}
