#include <stdio.h>

int main(){

int N, M, x, y, pico;
printf("INSIRA O TAMANHO DO MAPA\n");
    
    scanf("%d %d", &N, &M);

    int mapa[N][M];

printf("INSIRA AS UULTIMAS COORDENADAS: \n");

    scanf("%d %d", &x, &y);


    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", mapa[i][j]);
            
            if(i == 0 && j == 0){
                pico = mapa[0][0];
                }else{
                    if(mapa[i][j] > pico){
                        pico = mapa[i][j];
                    }
                }
        }
    }
/*
   for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            switch (expression)
            {
            case j:
                 code 
                break;
            
            default:
                break;
            }
        }
    }
*/   



return 0;

}