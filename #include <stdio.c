#include <stdio.h>

int main(){



    int numero;

    
    do { 
        printf("digite um numero impar para prosseguir no programa, ou um numero par para sair!\n");
        scanf("%d" , &numero);

        if(numero / 2 ==0){
            printf("numero %d é impar!\n",numero);
        }else{
            printf("numero %d é par!\n",numero);
        }

    }while (numero % 2 !=0);

    printf("voce digitou um numero par, SAINDO...\n");

    
    
return 0;
}






