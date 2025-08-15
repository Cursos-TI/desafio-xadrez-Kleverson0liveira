#include <stdio.h>

int main() {
    // Simulação do movimento da Torre (usando for) 
    // A Torre se move 5 casas para a direita.
    printf(" Movimento da Torre \n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

   
    printf("\n"); 

    //  Simulação do movimento do Bispo (usando while) 
    // O Bispo se move 5 casas na diagonal (cima e direita).
    printf(" Movimento do Bispo \n");
    int casas_bispo = 5;
    while (casas_bispo > 0) {
        printf("Cima, Direita\n");
        casas_bispo--;
    }

    
    printf("\n"); // Adiciona uma linha em branco para separar os movimentos

    //  Simulação do movimento da Rainha (usando do-while) 
    // A Rainha se move 8 casas para a esquerda.
    printf(" Movimento da Rainha \n");
    int casas_rainha = 8;
        do {
            printf("Esquerda\n");
            casas_rainha--;
        } while (casas_rainha > 0);
   

    return 0;
}