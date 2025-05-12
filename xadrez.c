#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Desafio Novato

int main() {

    int bispo = 1, rainha = 1, torre = 1, cavalo = 1, i = 0; // Variáveis das peças criadas
    int opcao; // Variável da opção do switch

    while (bispo <= 5) // While para mexer o bispo no tabuleiro 
    {
        printf("O bispo se mexeu ao quadrado superior direito! \n");
        bispo++;
    }
    printf("\n");

        do { // Do while para mexer a rainha no tabuleiro
       printf("A rainha se mexeu para o quadrado esquerdo! \n");
        rainha++; 
        }
        while  (rainha <= 8);

        printf("\n");

        for (torre = 1; torre <= 5; torre++) // For para mexer o bispo no tabuleiro
        {
            printf("A torre se mexeu para o quadrado direito! \n");
        }
        printf("\n");
        printf("Para qual direção você quer mexer seu cavalo? \n");
        printf("1. Cima, cima, esquerda \n2. Cima, cima, direita \n3. Baixo, baixo, esquerda \n4. Baixo, baixo, direita \n");
        printf("Escolha uma opção: \n");
        scanf("%d", &opcao);
        
        switch (opcao)
{        
    case 1:
        while (cavalo <= 1)
        {
            for (i = 0; i <= 1; i++)
            {
                printf("O cavalo se mexeu para o quadrado de cima! \n");
            }
        printf("O cavalo se mexeu para o quadrado da esquerda! \n");
        cavalo++;
        }
    break;
        while (cavalo <= 1)
        {
            for (i = 0; i <= 1; i++)
            {
                printf("O cavalo se mexeu para o quadrado de cima! \n");
            }
        printf("O cavalo se mexeu para o quadrado da direita! \n");
        cavalo++;
        }
    case 2:
        while (cavalo <= 1)
        {
            for (i = 0; i <= 1; i++)
            {
                printf("O cavalo se mexeu para o quadrado de cima! \n");
            }
        printf("O cavalo se mexeu para o quadrado da direita! \n");
        cavalo++;
        }
    break;
    case 3:
        while (cavalo <= 1)
        {
            for (i = 0; i <= 1; i++)
            {
                printf("O cavalo se mexeu para o quadrado de baixo! \n");
            }
        printf("O cavalo se mexeu para o quadrado da esquerda! \n");
        cavalo++;
        }
    break;
    case 4:
        while (cavalo <= 1)
        {
            for (i = 0; i <= 1; i++)
            {
                printf("O cavalo se mexeu para o quadrado de baixo! \n");
            }
        printf("O cavalo se mexeu para o quadrado da direita! \n");
        cavalo++;
        }
    break;
    default:
        printf("Opção inválida. (Insira de 1 a 4) \n");
    break;
}

   return 0;
}
