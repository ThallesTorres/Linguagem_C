/* Exercício 07 - Faça 3 funções:
    • ler: - uma função que receba dois número inteiro positivo n;
    • multiplicar: - que multiplique os números recebidos na função ler;
    • imprimir: - que imprima o resultado da função multiplicar. */

# include <stdio.h>

int n1, n2;

int main(void)
{
    int ler(void);
    int multiplicar(int n1, int n2);
    int imprimir(int num);

    ler();
    imprimir(multiplicar(n1, n2));

    return 0;
}

int ler(void)
{
    printf("1° valor: ");
    scanf("%d", &n1);

    printf("2° valor: ");
    scanf("%d", &n2);

    return n1, n2;
}

int multiplicar(int n1, int n2)
{
    return n1 * n2;
}

int imprimir(int num)
{
    printf("Resultado = %d\n", num);

    return 0;
}