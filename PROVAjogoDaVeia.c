#include<stdio.h> 

/*
void imprimeTab(char tabuleiro[][]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%c", tabuleiro[i][j]); //>> a expressão deve ser um ponteiro para um tipo de objeto completo ????
        }printf("\n");
    }
}
*/



int main(){

    char tabuleiro[3][3];
    int N;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            tabuleiro[i][j] = '.'; 
        }
    }
    printf("\n");printf("\n");

printf("INSIRA O TABULEIRO:\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf(" %c", &tabuleiro[i][j]);
        };
    }

    scanf("%d", &N);



    
    return 0;
}