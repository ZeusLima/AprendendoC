#include <stdio.h>

int main(){


    int N;   // scanf("%d", &N);
    N = 7;
    int piramide[N][N];


for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){            
        piramide[i][j] = 2;
    }
}
int x = 0;

        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){            
                if(i == 0 + x || j == 0 + x || i == N-1 - x || j == N-1 - x ) {
                    if(piramide[i-1][j-1]>piramide[i][j]){
                        piramide[i][j] = x+1;
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