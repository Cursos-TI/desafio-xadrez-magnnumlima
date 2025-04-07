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

    
    // Movimento da Rainha


    int r = 0;

    while (r < 8)
    {
        printf("Rainha moveu para ESQUERDA\n");
        r++;
    }
    
    
    
    return 0;
}