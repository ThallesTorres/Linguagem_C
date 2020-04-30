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


int binario_para_decimal(int qtd) {

    char vetor[qtd];

    linha();

    printf("Digite o número em BINÁRIO com %i posições: ", qtd);
    scanf("%s", vetor);

    int soma_final = 0; 
 
    for (int count = 0, expoente = qtd - 1; count < qtd; count ++, expoente --) {

        if (vetor[count] == '1') {

            int soma_temp = 1;

            for (int exp_temp = expoente; exp_temp != 0; exp_temp --) {

                soma_temp *= 2;

            }

        soma_final += soma_temp;

        }
        
    }

    return soma_final;

}


int main(void) {

    linha();

    printf("\033[33m-----BINÁRIO PARA DECIMAL-----\033[m\n");

    linha();

    int qtd = 0;

    printf("Quantidade de digitos a serem digitados: ");
    scanf("%i", &qtd);

    int resp = binario_para_decimal(qtd);

    linha();

    printf("Número convertido para decimal: %i\n", resp);

    linha();

    return 0;
}
