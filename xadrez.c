#include <stdio.h>


int main(){

    //pular linha:
    printf("\n");

    //Movimentação da Torre com for:
    for(int i = 0; i <5; i++){
        printf("Direita\n");
    }

    //pular linha:
    printf("\n");

    //Movimentação do Bispo com while:
    int i = 0;
    while(i < 5){
        printf("Direita, Cima\n");
        i++;
    }

    //pular linha:
    printf("\n");

    //Movimentação da Rainha com do-while:
    int a = 0;
    do{
        printf("Esquerda\n");
        a++;
    } while (a < 8);
    

    return 0;
}