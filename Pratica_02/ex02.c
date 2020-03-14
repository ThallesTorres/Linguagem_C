// Exercício 02 - Escreva uma função que leia um inteiro não-negativo n e imprima a soma dos n primeiros 
// números primos.

#include <stdio.h>

int somaprimo (int A);
int primo (int B);

int A;
int B;

int somaprimo (int A)
{
    int contagem = 1;
    int soma = 2;
    printf ("A soma eh 2");
    int teste = 3;
    while (contagem < A)
    {
        if (primo (teste))
        {
            soma = soma + teste;
            printf (" + %d", teste);
            contagem++;
        }
        teste++;
    }
    printf (" = %d", soma);
    return soma;
}

int primo (int B)
{
    int cont;
    int cond = 0;
    for (cont = 1; cont <= B; cont++)
        if (B % cont == 0)
            cond++;
    if (cond == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

main ()
{   
    int contagem = 1;
    int soma;
    printf ("Insira o valor: ");
    scanf ("%d", &A);
    if (A <= 0)
        printf ("Número inválido");
    else if (A == 1)
        printf ("Apenas 2 eh numero primo");
    else
        somaprimo (A);
    printf ("\n");
    system("pause");
}

/*// Exercício 02 - Escreva uma função que leia um inteiro não-negativo n e imprima a soma dos n primeiros 
// números primos.

# include <stdio.h>

int main(void)
{
    int num, count_primo;
    count_primo = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    for (int count2 = 2; count_primo <= num; count2)
    {
        for (int count = 2; count_primo <= num; count ++)
        {
            if (count2 % count == 0)
            {
                count_primo ++;
                printf("%d", count);
            }
        }
    }

    int num, qtd_num_primo;
    qtd_num_primo = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    //printf("Números divisiveis por %d: ", num);

    for (int count = 1; qtd_num_primo <= num; count ++)
    {
        if (num % count == 0)
        {
            qtd_num_primo += 1;
            printf("%d ", count);
        }
    }

    //printf("\nSoma dos primeiros números primos até %d: \n", num);
}*/