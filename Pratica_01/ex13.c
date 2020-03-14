// Exercício 13 - Dados um inteiro x e um inteiro não-negativo n, calcular x n.

#include <stdio.h>

int main(void)
{
    int n1, n2;

    printf("Digite um número inteiro: ");
    scanf("%d", &n1);

    printf("Digite um outro inteiro (exceto negativos): ");
    scanf("%d", &n2);

    printf("%d elevado a %d é ", n1, n2);

    (n2 == 0 && n1 != 0) 
    ?
    printf("1 \n") 
    :
    (n2 == 0 && n1 == 0) 
    ?
    printf("uma Indeterminação \n") 
    :
    printf("");

    for (int count = 1; count < n2; count ++)
    {
        n1 = n1 * n1;
    }
    
    printf("%d\n", n1);


/*
    if (n2 == 0 && n1 != 0)
    {
        printf("1 \n");
    }

    else if (n2 == 0 && n1 == 0)
    {
        printf("uma Indeterminação \n");
    }

    else 
    {
        for (int count = 1; count < n2; count ++)
        {
            n1 = n1 * n1;
        }
        
        printf("%d\n", n1);
    }*/
}