#include <stdio.h>

int main(){

    int N, M, Jx, Jy;

///printf("INSIRA O TAMANHO DO MAPA\n");
scanf("%d %d", &N, &M);
    
    int mapa[N+2][M+2];
    int mapaPicos[N+2][M+2];
    int FlagResgate = 0;
    int cont = 0; ///contará as impressões de locais de pico de radiação

///printf("\nINSIRA AS UULTIMAS COORDENADAS DO JEDI: \n"); 
scanf("%d %d", &Jx, &Jy);


///zerando mapas
    for(int i = 0; i< N+2; i++){
        for(int j = 0; j < M+2; j++){
            mapa[i][j] = 0;
            mapaPicos[i][j] = 0;
        }
    }
///printf("\nINSIRA O MAPA DE RADIACAO: \n");

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &mapa[i+1][j+1]);
        }
    }

    ///ATRIBUINDO 1'S NOS PICOS DO MAPA DE PICOS
    for(int i = 1; i < N+2; i++){
        for(int j = 1; j < M+2; j++){
            if( mapa[i][j] > mapa[i-1][j-1] && mapa[i][j] > mapa[i-1][j] && mapa[i][j] > mapa[i-1][j+1] &&
                mapa[i][j] > mapa[i][j-1]                                && mapa[i][j] > mapa[i][j+1] &&
                mapa[i][j] > mapa[i+1][j-1] && mapa[i][j] > mapa[i+1][j] && mapa[i][j] > mapa[i+1][j+1])
                {
                mapaPicos[i][j] = 1;
                }
        }
    }

/// verificando se o jedi foi atingido e imprimindo os picos
    for(int i = 0; i < N + 2; i++){
        for(int j = 0; j < M+ 2; j++){
            
            if(mapaPicos[i][j] == 1){
                cont++; 
                printf("Local %d: %d %d\n",cont, i, j);

                if(i == Jx && j == Jy){
                    ///printf("\n\n MORREU SENDO ATRIBUÍDO VERDADEIRO\n");
                    FlagResgate = 0;
                }else{
                    FlagResgate = 1;
                }
            }
            
        }
    }

    
    if(FlagResgate == 1){
        printf("Ao resgate!\n");
    }else{
        printf("Desanse na Força...");
    }
    
/*
   printf("\n\n\nXXXXXXXXXX testando impressões de mapa XXXXXXXXXXXXXX");
    printf("\nIMPRIMINDO MAPA: \n");

    for(int i = 0; i < N+2; i++){
        for(int j = 0; j < M+2; j++){
            printf("\t%d", mapa[i][j]);
        }printf("\n");
    }

        printf("\nIMPRIMINDO MAPA de picos: \n");

    for(int i = 0; i < N+2; i++){
        for(int j = 0; j < M+2; j++){
            printf("\t%d", mapaPicos[i][j]);
        }printf("\n");
    }
*/


return 0;
}