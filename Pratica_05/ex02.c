// Exercício 02 - Faça uma rotina que recebe uma string qualquer e retorna-o invertido. Por exemplo, se a string passada por parâmetro fosse 'teste', a rotina deve retornar 'etset'.

# include <stdio.h>
# include <string.h>


int linha(void) {

    printf("\n\033[33m------------------------------\033[m\n\n");

    return 0;

}


char invertido[101];

int inverter(char string[101]) {

    for (int decrescente = strlen(string), crescente = 0; decrescente != 0; decrescente --, crescente ++) {

        invertido[crescente] = string[decrescente -1];

    }

    return 0;

}


int main(void) {

    char string[101];

    linha();

    printf("Digite algo: ");
    gets(string);

    linha();

    inverter(string);

    printf("'%s' invertido fica: %s\n", string, invertido);

    linha();

    return 0;

}
