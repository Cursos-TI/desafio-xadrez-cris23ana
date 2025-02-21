#include <stdio.h>

/*INICIANTE: Você deverá criar um único programa em C que simule o movimento de três peças: Torre, Bispo e Rainha.
Para cada peça, utilize uma estrutura de repetição diferente (for, while ou do-while) para simular seu movimento.
O programa deverá imprimir no console a direção do movimento a cada casa percorrida pela peça.

Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
 
Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita.
Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
 
Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.

INTERMEDIÁRIO: Você deverá implementar, no mesmo programa em C do desafio anterior, a lógica para o movimento do Cavalo.
O Cavalo se move duas casas em uma direção (horizontal ou vertical) e depois uma casa perpendicularmente, formando um "L".
para este desafio, o Cavalo deverá se mover duas casas para baixo e uma casa para a esquerda.
Você precisará usar pelo menos dois loops aninhados, sendo um deles obrigatoriamente um loop for.
O outro loop pode ser while ou do-while, à sua escolha.
Assim como nas outras peças, você imprimirá a direção do movimento a cada casa percorrida.

AVANÇADO: Você deverá modificar o programa em C, que já contém a movimentação da Torre, Bispo, Rainha e Cavalo, realizando as seguintes alterações:
Recursividade: Substitua os loops simples que controlam os movimentos da Torre, Bispo e Rainha por funções recursivas.
Cada função recursiva deverá simular o movimento da respectiva peça, imprimindo a direção correta a cada casa.
 
Loops Complexos para o Cavalo: Aprimore a movimentação do Cavalo, utilizando loops aninhados com múltiplas variáveis e/ou condições.
Você pode usar continue e break para controlar o fluxo do loop de forma mais precisa.
O movimento do Cavalo agora será para cima e para a direita, em "L" (duas casas para cima e uma para a direita).
 
Bispo com Loops Aninhados: O Bispo deve ser implementado com recursividade, e também com loops aninhados,
utilizando o loop mais externo para o movimento vertical, e o mais interno para o movimento horizontal.
*/

//função recursiva para o movimento da torre
    void movimentoTorre(int mT){
        if(mT > 0){
        printf("Direita\n");
        movimentoTorre(mT - 1);
        }
    }
    
//função recursiva para o movimento do bispo
    void movimentoBispo(int mB){
        if(mB > 0)
        {
            for(int iB = 1; iB <= 1; iB++)
            {
                printf("Cima, ");
                for(int jB = 1; jB <= 1; jB++)
                {
                    printf("Direita\n");
                }
            }
            movimentoBispo(mB - 1);
        }
    }
    
//função recursiva para o movimento da rainha
    void movimentoRainha(int mR)
    {
        if(mR > 0)
        {
            printf("Esquerda\n");
            movimentoRainha(mR - 1);
        }
    }
    
    int main(){
    //Movimento da Torre com recursividade
        int mT = 5;
        printf("Movimento da Torre\n");
        movimentoTorre(mT);
    
    //Movimento do Bispo com recursividade e loops aninhados
        int mB = 5;
        printf("Movimento do Bispo:\n");
        movimentoBispo(mB);
    
    //Movimento da Rainha com recursividade
        int mR = 8;
        printf("Movimento da Rainha:\n");
        movimentoRainha(mR);
    
    //Movimento do Cavalo com loops aninhados continue e break
        printf("\n");
        printf("Movimento do Cavalo:\n");
        
            for(int iC = 1, jC = 1; jC <= 2; iC++, jC++)
            {
                if(iC == 1)
                {
                    printf("Cima\n");
                    continue;
                } else {
                    printf("Cima\n");
                    printf("Direita\n");
                    break;
                }
            }
    
    return 0;
}

