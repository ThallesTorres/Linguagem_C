// Exercício 11 - Durante uma corrida de automóveis com N voltas  de duração foram anotados para um piloto, na ordem, os tempos resgistrados em cada volta. Fazer um programa em C para ler os tempos das N voltas, calcular e imprimir:

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


int main (void ) {

    int qtd = 0;

    linha();

    printf("Quantidade de voltas realizadas: ");
    scanf("%i", &qtd);

    float vetor[qtd],soma = 0, melhor_tempo = 0;
    int volta = 0;

    linha();

    for (int count = 0; count < qtd; count ++) {

        printf("Digite o tempo da %i° volta: ", count + 1);
        scanf("%f", &vetor[count]);

        if (count == 0) {

            melhor_tempo = vetor[count];

        }

        if (melhor_tempo > vetor[count]) {

            melhor_tempo = vetor[count];
            volta = count + 1;


        }

        soma += vetor[count];

    }

    linha(); 

    printf("Melhor tempo: %.1f\n", melhor_tempo);
    printf("Ocorrido na %i volta \n", volta);
    printf("Tempo médio: %.1f\n", soma / qtd);

    linha();

    return 0;

}