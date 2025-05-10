#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Desafio Novato

int main() {

    int bispo = 1, rainha = 1, torre = 1; // Variáveis das peças criadas

    while (bispo <= 5) // While para mexer o bispo no tabuleiro 
    {
        printf("O bispo se mexeu ao quadrado superior direito! \n");
        bispo++;
    }

        do { // Do while para mexer a rainha no tabuleiro
       printf("A rainha se mexeu para o quadrado esquerdo! \n");
        rainha++; 
    }
        while  (rainha <= 8);

        for (torre = 1; torre <= 5; torre++) // For para mexer o bispo no tabuleiro
        {
            printf("A torre se mexeu para o quadrado direito! \n");
        }
        
    return 0;
}
