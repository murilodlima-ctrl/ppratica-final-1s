#include <stdio.h>

int main()
{
    int vetor[100];
    int n;
    int i, j;
    int atual = -1;
    int ordenado = 0;
    int repetido;

    for (i = 0; i < 100; i++)
    {
        vetor[i] = rand() % 1000;

        repetido = 0;

        for (j = 0; j < i; j++)
        {
            if (vetor[i] == vetor[j])
            {
                repetido = 1;
            }
        }

        if (repetido == 1)
        {
            i--;
        }
    }

    printf("Vetor gerado:\n");
    for (i = 0; i < 100; i++)
    {
        printf("%d", vetor[i]);

        if (i < 99)
        {
            printf("; ");
        }
    }
    printf("\n\n");

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (i = 0; i < 100; i++)
    {
        if (vetor[i] == n)
        {
            atual = i;
        }
    }

    if (atual == -1)
    {
        printf("numero nao encontrado.\n");
    }
    else
    {
        for (i = 0; i < 100; i++)
        {
            if (vetor[i] < n)
            {
                ordenado++;
            }
        }

        printf("%d esta no indice %d, se o vetor for ordenado passara a estar no indice %d\n",
               n, atual, ordenado);
    }

    return 0;
}
