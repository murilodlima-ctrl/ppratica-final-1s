#include <stdio.h>

int main() {

    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };

    int linhas = 5;
    int colunas = 5;

    int i, j, temp;

    for(i = 0; i < linhas; i++) {

        for(j = 0; j < colunas / 2; j++) {

            temp = matriz[i][j];

            matriz[i][j] = matriz[i][colunas - 1 - j];

            matriz[i][colunas - 1 - j] = temp;
        }
    }

    printf("Matriz apos a troca:\n\n");

    for(i = 0; i < linhas; i++) {

        for(j = 0; j < colunas; j++) {

            printf("%d ", matriz[i][j]);
        }

        printf("\n");
    }

    return 0;
}
