// Exercício 04 - Dado um vetor de 5 posições contendo 0 ou 1 (base binária), transformá-lo para a base decimal. Criar uma função que recebe esse vetor e retorne o número (base decimal)

int linha(void) {

    char x = '-';

    printf("\n");

    for (int count = 0; count < 30; count ++) {

        printf("%c", x);

    }

    printf("\n\n");

    return 0;

}


int binario_para_decimal(char vetor[4]) {

    for (int count = 0; count < 4; count ++) {

        
    }
}


int main(void) {

    char binario[4];

    linha();

    printf("--BINÁRIO PARA DECIMAL\n");

    linha();

    printf("Digite o número em BINÁRIO: ");
    scanf("%s", binario);

    int resp = binario_para_decimal(binario);

    linha();

    printf("Número: %c", binario);

    return 0;
}