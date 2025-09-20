#include <stdio.h>

int main() {
    // Variáveis que definem quantas casas cada peça vai andar
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // --------------------
    // Movimento da Torre
    // usando FOR
    // --------------------
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    // --------------------
    // Movimento do Bispo
    // usando WHILE
    // --------------------
    printf("\nMovimento do Bispo:\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // --------------------
    // Movimento da Rainha
    // usando DO-WHILE
    // --------------------
    printf("\nMovimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}
