#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    //Movimento da Torre (Estrutura de repetição usada: do-while)
    int iT = 1;
    printf("Movimento da Torre:\n");
    do{
        printf("Direita\n");
        iT++;
    } while (iT <= 5);
    
//Movimento do Bispo (Estrutura de repetição usada: for)
    printf("Movimento do Bispo:\n");
    for(int iB = 1; iB <= 5; iB++)
    printf("Cima, Direita\n");

//Movimento da Rainha (Estrutura de repetição usada: while)
    printf("Movimento da Rainha:\n");
    int iR = 1;
    while(iR <= 8)
    {
        printf("Esquerda\n");
        iR++;
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
