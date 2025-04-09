#include <stdio.h>
 // JOGO XADREZ NIVEL MESTRE

 // MOVIMENTO TORRE (5 casas direita)
 
void moverTorre(int casas)
{
    
    if (casas > 0) {
    printf("Torre moveu para Direita\n");
    moverTorre(casas - 1);
    
    }

    
}


 // MOVIMENTO BISPO (5 casas diagonal, com recursividade)


void moverBispo(int casas){
    if (casas > 0) {
    for (int i = 0; i < 1; i++)
    {
       printf("Bispo moveu para Cima\n");
       for (int j = 0; j < 1; j++)
       {
        printf("Bispo moveu para Direita\n");
       }
       moverBispo(casas -1);
    }
    
    
}
}

// MOVIMENTO CAVALO

void moverCavalo(int casas){
for (int i = 0; i < 2; i++)
{
    printf("Cavalo moveu para Cima\n");
}for (int j = 0; j < 1; j++)
{
    printf("Cavalo moveu para Direita\n");
}
}


 // MOVIMENTO RAINHA (8 casas esquerda)

void moverRainha(int casas){
    if (casas > 0) {
    printf("Rainha moveu para Esquerda\n");
    moverRainha(casas - 1);
}
}


int main(){

    printf("\n**** MOVIMENTO TORRE****\n\n");
    moverTorre(5);
    printf("\n****** TORRE PAROU ******\n");
    printf("\n**** MOVIMENTO BISPO****\n\n");
    moverBispo(5);
    printf("\n****** BISPO PAROU ******\n");
    printf("\n**** MOVIMENTO RAINHA****\n\n");
    moverRainha(8);
    printf("\n******RAINHA PAROU ******\n\n");
    printf("****** MOVIMENTO CAVALO ******\n");
    moverCavalo(1);
    printf("\n****** CAVALO PAROU ******\n\n");
}
