// Exercício 32 - Faça uma função que leia uma string de 50 posições digitada por um usuário, e retorne valor 1 se for um palíndromo ou 0 em caso negativo.

# include <stdio.h>


int linha(void) {

    printf("\n\033[33m------------------------------\033[m\n\n");

    return 0;

}


int main(void) {

    char nome[101];
    char substituir[2];
    int count_xx = 0;

    linha();

    printf("Digite seu nome: ");
    gets(nome);

    do {

        count_xx = 0;
        
        linha();

        printf("Caractere a ser substituido: ");
        gets(substituir);

        for (int index = 0; substituir[index] != '\0'; index ++) {

            count_xx ++;

        }

    } while (count_xx > 1);   

    linha();

    char vogais[6] = "aeiou";
    int count, count_vogais = 0, count_consoantes = 0, count_branco = 0;
    char nome_tratado[101];
    char nome_trocado[101];

    for (count = 0; nome[count] != '\0'; count ++) {

        if (nome[count] == substituir[0]) {

            nome_trocado[count] = '*';

        }

        else {

            nome_trocado[count] = nome[count];

        }

        if (nome[count] == ' ') {

            count_branco ++;

        }

        else {

            int count_temp = 0;

            for (int temp = 0; vogais[temp] != '\0'; temp ++) {

                if (vogais[temp] == nome[count]) {

                    count_temp ++;

                }

            }

            if (count_temp > 0) {

                count_vogais ++;

            }

            else {

                nome_tratado[count_consoantes] = nome[count];
                count_consoantes ++;

            }

        }

    }

    printf("Quantidade de caracteres: %i\n", count);
    printf("Quantidade de vogais: %i\n", count_vogais);
    printf("Quantidade de consoantes: %i\n", count_consoantes);
    printf("Quantidade de espaços em branco: %i\n", count_branco);

    linha();

    printf("Nome sem as vogais e espaços em braco: %s\n", nome_tratado);
    printf("Nome com o caractere '%c' substituido: %s\n", substituir[0], nome_trocado);

    linha();

    return 0;

}
