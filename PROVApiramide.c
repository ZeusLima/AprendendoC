#include <stdio.h>

int main(){


    int N, inic = 0, cont = 1;


    //scanf("%d", &N);
    N = 5;
    int piramide[N][N];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            piramide[i][j] = 1; //ATRIBUIOND 1S A TODA A MATRIZ
        }
    }

    for(int k = 0; k < N-3; k++){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(i != 0 && i != N-1 && j != inic && j != N - 1){
                    piramide[i][j] += i;
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