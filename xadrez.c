#include <stdio.h>

int main() {


    //  Movimento da Torre cinco casas para a direita

    
    for (int t = 0; t < 5; t++)
    {
        printf("Torre moveu para DIREITA\n");
    }

    

    // Movimento Bispo cinco casas diagonal


    int b = 0;

    do
    {
        printf("Bispo moveu para CIMA/DIREITA\n");
        b++;
    } while (b < 5);

    printf("\n");

    
    // Movimento da Rainha


    int r = 0;

    while (r < 8)
    {
        printf("Rainha moveu para ESQUERDA\n");
        r++;
    }
    printf("\n");

    // Movimento do cavalo

    int movimentoLcavalo = 1;

    while (movimentoLcavalo--){
        for (int i = 0; i < 2; i++){
        printf("Cavalo moveu para BAIXO\n");
        }
        printf("Cavalo moveu para DIREITA\n");
        
    }

    return 0;

}

