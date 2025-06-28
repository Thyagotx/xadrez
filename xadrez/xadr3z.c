
#include <stdio.h>

int main()
{
    // ===============================
    // Movimento da TORRE: 5 casas para a direita (usando FOR)
    // ===============================
    int i; // contador
    int movimentoTorre = 5;

    printf("Movimento da Torre:\n");
    for (i = 1; i <= movimentoTorre; i++)
    {
        printf("Direita\n");
    }

    printf("\n");

    // ===============================
    // Movimento do BISPO: 5 casas na diagonal cima-direita (usando WHILE)
    // ===============================
    int movimentoBispo = 5;
    int j = 1;

    printf("Movimento do Bispo:\n");
    while (j <= movimentoBispo)
    {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n");

    // ===============================
    // Movimento da RAINHA: 8 casas para a esquerda (usando DO-WHILE)
    // ===============================
    int movimentoRainha = 8;
    int k = 1;

    printf("Movimento da Rainha:\n");
    do
    {
        printf("Esquerda\n");
        k++;
    } while (k <= movimentoRainha);

    return 0;
}
