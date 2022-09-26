#include <stdio.h>

int main(){
    int n, aux;

    scanf("%i",n);

    int vetor[n];

printf("--------------------------------------------------------");
    for ( int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    printf("--------------------------------------------------------");

    for ( int i = 0; i < n; i++){
        printf("%d", vetor[i]);
    }





/*

                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;

*/
    return 0;
}