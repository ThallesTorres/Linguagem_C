# include <stdio.h>

int main(void) {

    char nome[40];

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Seu nome: ");

    for (int count = 0; count < 4; count ++) {
        printf("%c", nome[count]);
    }

    return 0;
}