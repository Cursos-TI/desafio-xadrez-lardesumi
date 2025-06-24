#include <stdio.h>

int main () {
    int i; 

    //=== TORRE: 5 casas para a direita
    printf("Movimento da TORRE (5 casas para a direita): \n");
    for (i = 1; i <= 5; i++){
        printf("Casa %d: Direita\n", i);
    }

    printf("\n");

    //=== BISPO: 5 casas diagonal (Cima, Direita)
    printf("Movimento do BISPO (5 casas para cima e para direita): \n");
    i = 1; 
    while (i <= 5)
    {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    printf("\n");

    //=== RAINHA: 8 casas para a esquerda
    printf("Movimento da RAINHA (8 casas para a esquerda): \n");
    i = 1; 
    do
    {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= 8);    

    return 0; 
}
