// Exercício 03 - Faça uma função que receba, por parâmetro, um valor inteiro e positivo e retorna o 
// número de divisores desse valor.

# include <stdio.h>

int num_primo;

int main(void)
{
    int num;
        
    printf("Digite um número: ");
    scanf("%d", &num);

    printf("Números divisiveis por %d: ", num);

    soma_primos(num);

    printf("\nSoma dos primeiros números primos até %d: %d\n", num, num_primo);
}

int soma_primos(num)
{
    int count, qtd_num_primo ;
    qtd_num_primo = num_primo = 0;
    
    for (count = 1; count <= num; count ++)
    {
        if (num % count == 0)
        {
            qtd_num_primo += 1;
            num_primo += count;
            printf("%d ", count);
        }
    }
}