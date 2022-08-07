#include <stdio.h>
#include <stdlib.h>

int imprimirPares(int);

int main()
{
    int numero;

    printf("Digite um número inteiro par:");
    scanf("%d", &numero);

    imprimirPares(numero);

    return 0;
}

int imprimirPares(int numero)
{
    if (numero >= 0)
    {
        if (numero % 2 == 0)
        {
            printf("\n%d\n", numero);
            imprimirPares(numero - 1);
        }
        else
            imprimirPares(numero - 1);
    }
    else
        return 0;
}
