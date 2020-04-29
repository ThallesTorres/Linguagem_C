// Exercício 04 - Dado um vetor de 5 posições contendo 0 ou 1 (base binária), transformá-lo 
// para a base decimal. Criar uma função que recebe esse vetor e retorne o número (base decimal).

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


int binario_para_decimal(char vetor[5]) {

    int soma_final = 0; // Variável que irá conter o valor final da soma

    // Aqui começa um 'for' inicial, contendo o 'count', que irá servir para limitar
    // o cilco em 5 vezes, contem também o 'expoente', que como diz será o expoente 
    // da conta, ele começa da esquerda para a direita, por isso ele é decrescente
    // e começa com 4 (ficando 4, 3, 2, 1, 0). 
    for (int count = 0, expoente = 4; count < 5; count ++, expoente --) {

        // Aqui entra a base, como eu tinha transformado o número que o usuário digitou
        // em um vetor 'char', então irá basicamente percorrer por esse vetor, verificando
        // se ele é igual a '1', pois o 'número' só terá '0' ou '1' (binário).
        if (vetor[count] == '1') {

            // Aqui entra a variável temporaria, ela irá guardar a multiplicação (por isso
            // iniciando com 1), sempre no começo do ciclo se resetando.
            int soma_temp = 1;

            // Aqui, criei uma variável temporaria recebendo o 'expoente', pois não posso 
            // mudar o valor dela, com isso, se o 'expoente' veio com 3, irá efetuar a multiplicação
            // por 2, 3 vezes.
            for (int exp_temp = expoente; exp_temp != 0; exp_temp --) {

                // Aqui, sempre lembrando que o 'soma_temp', começa com 1.
                soma_temp *= 2;

            }

        // Aqui, após ser armazenado no 'soma_temp', o resultado daquele ciclo, irá sem adicionado
        // a váriavel final.
        soma_final += soma_temp;

        }
        
    }

    // Aqui irá retornar a variável com a soma final (já o número em convertido para decimal) 
    // (é bem importante lembrar de retornar a variável, ou perderam tempo igual a mim kkkk).
    return soma_final;

}


int main(void) {

    char binario[5];

    linha();

    printf("-----BINÁRIO PARA DECIMAL-----\n");

    linha();

    printf("Digite o número em BINÁRIO com 5 posições: ");
    scanf("%s", binario);

    int resp = binario_para_decimal(binario);

    linha();

    printf("Número convertido para decimal: %i\n", resp);

    linha();

    return 0;
}
