#include <stdio.h>

int main(){
    
    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int tabuleiro[10][10];

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};
    
    int linhaH = 2, colunaH = 4;
    int linhaV = 5, colunaV = 1;
    
    for (int i = 0; i < 3; i++){
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }
    
    for (int i = 0; i < 3; i++){
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    printf("Exibir Tabuleiro\n  ");
    for (int i = 0; i < 10; i++){
        printf("%c ", letras[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++){
        printf("%2d ", i);
        for (int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

