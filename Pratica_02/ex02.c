// Exercício 02 - Escreva uma função que leia um inteiro não-negativo n e imprima a soma dos n primeiros 
// números primos.

# include <stdio.h>

int main(void)
{
    int num, count, qtd_num_primo, num_primo;
    qtd_num_primo = num_primo = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Números divisiveis por %d: ", num);

    for (count = 1; count <= num; count ++)
    {
        if (num % count == 0)
        {
            qtd_num_primo += 1;
            num_primo += count;
            printf("%d ", count);
        }
    }

    printf("\nSoma dos primeiros números primos até %d: %d\n", num, num_primo);
}