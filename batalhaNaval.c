#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};  // inicializa tudo com zero

    // Coordenadas fixas dos navios
    int navio1_linha = 1;
    int navio1_coluna = 2;
    // Navio 1 horizontal, tamanho 3
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio1_linha][navio1_coluna + i] = 3;
    }

    int navio2_linha = 4;
    int navio2_coluna = 5;
    // Navio 2 vertical, tamanho 3
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio2_linha + i][navio2_coluna] = 3;
    }

    // Imprime o tabuleiro
    for (int linha = 0; linha < 10; linha++) {
        for (int coluna = 0; coluna < 10; coluna++) {
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
