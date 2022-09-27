#include <stdio.h>

int main(){

    int N, M, x, y;

printf("INSIRA O TAMANHO DO MAPA\n");

    scanf("%d %d", &N, &M);
    
    int mapa[N][M];
    int mapaPicos[N][M];

///zerando o mapa de picos
    for(int i = 0; i< N; i++){
        for(int j = 0; j < M; j++){
            mapaPicos[i][j] = 0;
        }
    }


printf("\nINSIRA AS UULTIMAS COORDENADAS: \n");

    scanf("%d %d", &x, &y);
    
printf("\nINSIRA O MAPA DE RADIACAO: \n");

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &mapa[i][j]);
        }
    }

printf("\nIMPRIMINDO MAPA DE PICOS ANTES DOS TESTES: \n");

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("\t%d", mapa[i][j]);
        }printf("\n");
    }


///ATRIBUINDO 1S NOS PICOS DO MAPA DE PICOS
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(mapa[i][j] > mapa[i-1][j-1] && mapa[i][j] > mapa[i-1][j] && mapa[i][j] > mapa[i-1][j+1] &&
            mapa[i][j] > mapa[i][j-1] && mapa[i][j] > mapa[i][j+1] &&
            mapa[i][j] > mapa[i+1][j-1] && mapa[i][j] > mapa[i+1][j]  && mapa[i][j] > mapa[i+1][j+1]){
                mapaPicos[i][j] = 1;
            }
        }
    }


///IMPRIMINDO MAPA 
printf("\nIMPRIMINDO MAPA: \n");

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("\t%d", mapa[i][j]);
        }printf("\n");
    }

printf("\nIMPRIMINDO MAPA DE PICOS DEPOIS DOS TESTES: \n");

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("\t%d", mapaPicos[i][j]);
        }printf("\n");
    }


return 0;
}