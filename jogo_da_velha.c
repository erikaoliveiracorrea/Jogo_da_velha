#include <stdio.h>
#include <stdlib.h>

int main(){

    //estru8tura dos dados
    int l, c;
    char jogo[3][3];

    //inicializar estrutura de dados
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            jogo[l][c] = ' ';
        }
    }
    //imprimir jogo
    printf(" 0   1   2\n");
    for (l = 0; l < 3; l++){
        for ( c = 0; c < 3; c++){
            printf(" %c ", jogo[l][c]);
            if (c < 2){
                printf("|");
            }
            if (c == 2){
                printf(" %d  ", l);
            }
            
        }
        if (l < 2){
            printf("\n-----------");
            printf("\n");
        }
    }
    

    return 0;
}
