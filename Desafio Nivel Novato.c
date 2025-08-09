#include <stdio.h>
 
int main() {
    int tabuleiro[10][10]; // Tabuleiro 10x10
    int navio1[3] = {3, 3, 3}; // Navio horizontal
    int navio2[3] = {3, 3, 3}; // Navio vertical
 
    // 1. Inicializar o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
 
    // 2. Posicionar navio horizontal
    int linhaH = 2; // linha inicial
    int colunaH = 4; // coluna inicial
 
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = navio1[i];
    }
 
    // 3. Posicionar navio vertical
    int linhaV = 5; // linha inicial
    int colunaV = 1; // coluna inicial
 
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = navio2[i];
    }
 
    // 4. Exibir o tabuleiro
    printf("Tabuleiro:\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
 
    return 0;
}