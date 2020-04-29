# include <stdio.h>

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