#include <stdio.h>

// Exercicio 1/NOVATO - Movimentação de Peças de Xadrez
int main(){


    int i = 0;
    
            //Mover a TORRE, 5 casa para a direita
            do{
            printf(" *** Torre ***\n"); //saida de dados
            printf("DIREITA\n"); //direção
            i++;//incremento
            }while(i <= 4); // condição 

            printf("\n"); //pular linha

            //Mover o BISPO, 5 casa para direita
            i = 0;
            while (i <= 4){ // Condição 
            printf("*** Bispo ***\n"); //saida de dados
            printf("CIMA,DIREITA\n"); //direção
            i++; //incremento
            };

            printf("\n"); //pular linha

        // Mover a RAINHA, 8 casa para esquerda
            i = 0; //variavel
            for(i ; i <= 7; i++){ // Condição
             printf("*** Rainha ***\n"); //saida de dados
            printf("ESQUERDA\n");  //Direção
            };
           
            
       

return 0;

}































