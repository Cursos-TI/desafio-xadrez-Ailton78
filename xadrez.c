#include <stdio.h>

void movimentar(int n, char direcao[10]){

  
    if(n > 0){
         printf("\t%s\n", direcao);
         movimentar(n - 1, direcao);
    }

}


int main() {
    
    const int bispo = 5, torre = 5, rainha = 8, cavalo = 4;


    printf("Bispo\n");
     movimentar(bispo,"diagonal superior direita");

    printf("\nTorre\n");
    movimentar(torre,"direita");
    

    printf("\nRainha\n");
    movimentar(rainha, "esquerda");
   


    printf("\nCavalo\n");
    for(int i = 0, j = 0 ; i < 4; i++, j++){

        if(j < 2){
        printf("\tcima\n");
        continue;
        }
        
        printf("\tDireita\n");
    }

    return 0;
}
