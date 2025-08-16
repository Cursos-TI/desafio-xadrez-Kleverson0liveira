#include <stdio.h>

// Função recursiva para mover a Torre
void anda_Torre(int i){
    if (i > 0) {
        
        printf("Direita\n");
        anda_Torre(i - 1);
}
}

// Função recursiva para mover o Bispo
void anda_Bispo(int i){
    if (i > 0) {
        anda_Bispo(i - 1);
        printf("Cima, Direita\n");
}
}

// Função recursiva para mover a Rainha
void anda_Rainha(int i){
    if (i > 0) {
        printf("Esquerda\n");
        anda_Rainha(i - 1);
}
}

// Função recursiva para mover o Cavalo
void anda_Cavalo(int i){
    if (i > 0) {
        printf("Cima\n");
        anda_Cavalo(i - 1);
        if(i == 1) {
            printf("Direita\n");
        }
       
}
}

int main() {
    // Simulação do movimento da Torre (usando for) 
    // A Torre se move 5 casas para a direita.
    printf(" Movimento da Torre \n");
    anda_Torre(5);
    printf("\n"); 

    //  Simulação do movimento do Bispo (usando while) 
    // O Bispo se move 5 casas na diagonal (cima e direita).
    printf(" Movimento do Bispo \n");
    anda_Bispo(5);

    
    printf("\n"); // Adiciona uma linha em branco para separar os movimentos

    //  Simulação do movimento da Rainha (usando do-while) 
    // A Rainha se move 8 casas para a esquerda.
    printf(" Movimento da Rainha \n");
    anda_Rainha(8);
   
printf("\n"); 

    //  Simulação do movimento do cavalo (usando for e while) 
    // o cavalo se move 2 casas para baixo e uma para esquerda.
    printf(" Movimento do Cavalo \n");
    anda_Cavalo(2);
            

    return 0;
}