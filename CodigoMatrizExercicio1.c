#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //Variáveis.
    int mat1[4][5];
    int conttrintalinha, conttrintacoluna,i,j,k, soma, somalinha[4], somacoluna[5];
    conttrintalinha = 0;
    conttrintacoluna = 0;
    //Para Gerar a Matriz.
    printf("Informe os elementos da Matriz 4x5:\n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("Indique o local: LINHA[%d] - COLUNA[%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }
    //Para Printar a Primeira Matriz.
    printf("\n");
    printf("Matriz 1:\n");
    printf("\n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%d |", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Para ver os valores de cada linha linha. se for igual a 30 printa 0: \n");
    printf("\n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if (mat1[i][j] == 30)
            {
                printf("0 |");
            }
            else
            {
                printf("%d |", mat1[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
    //Para calcular linhas;
    for(i = 0; i < 4; i++)
    {
        soma = 0;
        for(j = 0; j < 5; j++)
        {
            soma += mat1[i][j];
        }
        somalinha[i] = soma;
        if (somalinha[i] > 30)
        {
            conttrintalinha++;
        }
    }
    //Para calcular coluna
    for(j = 0; j < 5; j++)
    {
        soma = 0;
        for(i = 0; i < 4; i++)
        {
            soma += mat1[i][j];
        }
        somacoluna[j] = soma;
        if (somacoluna[j] > 30)
        {
            conttrintacoluna++;
        }
    }
    //Para printar os resultados, checando as linhas
    for(j = 0; j < 5; j++)
    {
        printf("\n Resultado da coluna[%d]: %d ", j, somacoluna[j]);
    }
    printf("\n");
    for(i = 0; i < 4; i++)
    {
        printf("\n Resultado da linha[%d]: %d ", i, somalinha[i]);
    }
    //Para mostrar a quantidade deles
    printf("\n");
    printf("\n Colunas - Numeros maiores que 30 : [%d]", conttrintacoluna);
    printf("\n Linnhas - Numeros maiores que 30 : [%d]", conttrintalinha);
    printf("\n");
}

