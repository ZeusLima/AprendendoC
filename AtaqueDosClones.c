#include <stdio.h>

int main(){

    int N, M, x, y;

printf("INSIRA O TAMANHO DO MAPA\n");

    scanf("%d %d", &N, &M);
    
    int mapa[N][M];
    int Nv = N + 2, Mv = M + 2;
    int mapaDeVerific[Nv][Mv], mapaPicos[Nv][Mv];
    int Resgate = -1, Descanse = -1;
    int cont = 0; ///contará as impressões de locais de pico de radiação


///zerando o mapa de picos
    for(int i = 0; i< Nv; i++){
        for(int j = 0; j < Mv; j++){
            mapaPicos[i][j] = 0;
        }
    }

printf("\nINSIRA O MAPA DE RADIACAO: \n");

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &mapa[i][j]);
        }
    }

/// jogando o mapa de radiação dentro do mapa de verificação
    for(int i = 0; i< Nv; i++){
        for(int j = 0; j < Mv; j++){
            mapaDeVerific[i+1][j+1] = mapa[i][j];
            mapaDeVerific[i][4] = 0;
            mapaDeVerific[4][j] = 0;
            mapaDeVerific[i][0] = 0;
            mapaDeVerific[0][j] = 0;
        }
    }

    ///ATRIBUINDO 1'S NOS PICOS DO MAPA DE PICOS
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if( mapaDeVerific[i][j] > mapaDeVerific[i-1][j-1] && mapaDeVerific[i][j] > mapaDeVerific[i-1][j] && mapaDeVerific[i][j] > mapaDeVerific[i-1][j+1] &&
                mapaDeVerific[i][j] > mapaDeVerific[i][j-1]   && mapaDeVerific[i][j] > mapaDeVerific[i][j+1] &&
                mapaDeVerific[i][j] > mapaDeVerific[i+1][j-1] && mapaDeVerific[i][j] > mapaDeVerific[i+1][j] && mapaDeVerific[i][j] > mapaDeVerific[i+1][j+1])
                {
                mapaPicos[i][j] = 1;
                }
        }
    }

printf("\nINSIRA AS UULTIMAS COORDENADAS DO JEDI: \n");

    scanf("%d %d", &x, &y);

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(mapaPicos[i][j] == 1 && i == x-1 && j == y-1){
                Descanse = 1;
                cont++;    
                printf("Local %d: %d %d", cont, i+1, j+1);
            }
        }
    }


/*
    printf("\nIMPRIMINDO MAPA de verific: \n");

    for(int i = 0; i < Nv; i++){
        for(int j = 0; j < Mv; j++){
            printf("\t%d", mapaDeVerific[i][j]);
        }printf("\n");
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
*/
/*#include <stdio.h>

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
        printf("Descanse na Força...");
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
}*/
return 0;
}