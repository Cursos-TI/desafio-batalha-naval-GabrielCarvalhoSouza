#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    int tabuleiro[8][8] = {
        {0, 3, 3, 3, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 3, 0, 0},
        {0, 0, 0, 0, 0, 3, 0, 0},
        {0, 0, 0, 0, 0, 3, 0, 0},
        {0, 0, 0, 0, 0, 3, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0},
    };

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (tabuleiro[i][j] == 3) {
                printf("Parte do navio na posição (%d, %d)\n", i, j);
            }
        }
    }


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    printf("\n");
    int tabuleiro2[10][10] = {
        {3, 3, 3, 3, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 3},
        {0, 0, 0, 0, 0, 0, 0, 0, 3, 0},
        {0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
        {0, 0, 0, 3, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 3, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 3, 0, 3, 0, 0, 0, 0},
        {0, 0, 0, 3, 0, 0, 3, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 3, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 3, 0},
    };

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro2[i][j]);
        }
        printf("\n");
    }

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Habilidade em cone:
    printf("\n");
    
    int cone[10][10] = {0};

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == 3 && j == 5) {
                cone[i][j] = 1;
            } else if (i == 4 && j == 4) {
                cone[i][j] = 1;
                cone[i][j + 1] = 1;
                cone[i][j + 2] = 1;
            } else if (i == 5 && j == 3) {
                cone[i][j] = 1;
                cone[i][j + 1] = 1;
                cone[i][j + 2] = 1;
                cone[i][j + 3] = 1;
                cone[i][j + 4] = 1;
            } else if (cone[i][j] != 1) {
                cone[i][j] = 0;
            }
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }
    
    // Habilidade em octaedro:
    printf("\n");
    
    int octaedro[10][10] = {0};
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == 3 && j == 5) {
                octaedro[i][j] = 1;
            } else if (i == 4 && j == 4) {
                octaedro[i][j] = 1;
                octaedro[i][j + 1] = 1;
                octaedro[i][j + 2] = 1;
            } else if (i == 5 && j == 5) {
                octaedro[i][j] = 1;
            } else if (octaedro[i][j] != 1) {
                octaedro[i][j] = 0;
            }
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    // Habilidade em cruz:
    printf("\n");
    
    int cruz[10][10] = {0};
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == 2 && j == 5) {
                cruz[i][j] = 1;
                cruz[i + 1][j] = 1;
                cruz[i + 2][j] = 1;
                cruz[i + 3][j] = 1;
                cruz[i + 4][j] = 1;
            } else if (i == 4 && j == 3) {
                cruz[i][j] = 1;
                cruz[i][j + 1] = 1;
                cruz[i][j + 2] = 1; 
                cruz[i][j + 3] = 1;
                cruz[i][j + 4] = 1;
            } else if (cruz[i][j] != 1) {
                cruz[i][j] = 0;
            }
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
