#include<stdio.h> 


/*void imprimeTab(char tabb[][]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%c", tabb[i][j]);
        }printf("\n");
    }
}
*/


int main(){

    char tabuleiro[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            tabuleiro[i][j] = '.'; 
        }
    }
    printf("\n");printf("\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%c", tabuleiro[i][j]);
        }printf("\n");
    }


    
    return 0;
}