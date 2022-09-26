#include <stdio.h>

int main(){
    int n, aux;

<<<<<<< HEAD
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
=======
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

>>>>>>> 3666f9922c94eae6ffb6e6898d15dd569fa54819
    return 0;
}