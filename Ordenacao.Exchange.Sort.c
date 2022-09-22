#include <stdio.h>

int main(){
    int n, aux;

    scanf("%d",&n);

    int vetor[n];

    for(int k = 0; k < n; k++){
        scanf("%d ", &vetor[k]);
    }

    for(int i = 0; i < n-2; i++){
        for(int j = i+1; j < n-1; j++){
            if (vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
        printf("%d ", vetor[i]);
    }

    return 0;
}