#include <stdio.h>
#define N 3

float media(float v[], int n){
    float soma = 0.0;

    for(int i=0; i < N; i++){
        soma += v[i];
    }
    return soma / 3;

}


int main(){

    float notas[N];

    for(int i = 0; i < N; i++){
        scanf("%f", notas[i]);
    }

    
    return 0;
}