#include<stdio.h>
#define MAX 10

void imprimir(int n, int M[MAX][MAX]) 
{
    int x, y;
    for (x = 0; x < n; x++) {
        for (y = 0; y < n; y++)
            printf(" %3d ", M[x][y]);
        printf("\n");
    }   
}

int passeio(int n, int x, int y, int pos, int M[MAX][MAX], int xMove[], int yMove[]) 
{
    int k, nextX, nextY;
    if (pos == n*n) return 1;
    for (k = 0; k < 8; k++) {
        nextX = x + xMove[k];
        nextY = y + yMove[k];

        if ((nextX >= 0) && (nextX < n) && (nextY >= 0) && (nextY < n) &&
            (M[nextX][nextY] == 0)) {
            M[nextX][nextY] = pos + 1;
        if (passeio(n, nextX, nextY, pos + 1, M, xMove, yMove))
            return 1;
        else
            M[nextX][nextY] = 0; /* libera a posicao do tabuleiro */
        }
    }
    return 0;
}

int main() 
{
    int M[MAX][MAX], x, y, n, startX, startY;
    int xMove[8] = {2, 1, -1, -2, -2, -1,  1,  2};
    int yMove[8] = {1, 2,  2,  1, -1, -2, -2, -1};
    printf("Entre com o tamanho do tabuleiro: ");
    scanf("%d", &n);
    printf("Entre com a linha inicial do cavalo: ");
    scanf("%d", &startX);
    printf("Entre com a coluna inicial do cavalo: ");
    scanf("%d", &startY);
    for (x = 0; x < n; x++)
        for (y = 0; y < n; y++)
            M[x][y] = 0;
        M[startX - 1][startY - 1] = 1;
        if (passeio(n, startX - 1, startY - 1, 1, M, xMove, yMove) == 0)
            printf("Nao existe solucao.\n");
        else
            imprimir(n, M);
        return 0;
}
