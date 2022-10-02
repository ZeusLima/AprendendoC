#include <stdio.h>

int main(){


    int N;   // scanf("%d", &N);
    N = 7;
    int piramide[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            piramide[i][j] = 6; //ATRIBUIOND 1S A TODA A MATRIZ
        }
    }

/*

if(i == 0  || j ==0 || i == N-1 || j == N-1) {
                    piramide[i][j] = 1;
                }
                if((i == h || j == h || i == N-1-h || j == N-1-h) && (piramide[i][j] != piramide[i-1][j-1])) {
                            
                            piramide[i-1][j-1] += 3;
                        }
                

*/

    for(int h = 1; h < (N/2 + 1); h++){
        printf("valor de h: %d ",h);
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(i == h || j == h  || i == N-1-h || j == N-1-h) { //se for as bordas, vira 1
                        piramide[i][j] = h;
                    }else{
                        if(i == 0 || j == 0  || i == N-1 || j == N-1) { //se for as bordas, vira 1
                        piramide[i][j] = 1;                
                        }
                    }
            }
        }        
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            printf("%d ", piramide[i][j]);
        }printf("\n");
    }

    return 0;
}