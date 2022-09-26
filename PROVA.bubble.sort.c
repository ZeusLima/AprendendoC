#include <stdio.h>

void recebeVetor(int array[], int tam){
    for(int i = 0; i < tam; i++){
        scanf("%d", &array[i]);
    }
}



void imprimeVetor(int array[], int tam){
    for(int i = 0; i < tam; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}


void bubbleSort(int array[], int n){
    int flag=1;
    while(flag != 0){
        flag = 0;
        imprimeVetor(array,n);
        for(int i = 1; i <= n - 1; i ++){
                    if(array[i-1] > array[i]){
                    flag=1;
                    int aux = array[i-1];
                    array[i-1] = array[i];
                    array[i] = aux;
                }
            }

    }
}

int main(){

    int N;

    scanf("%d", &N);

    int array[N];

    for(int i = 0; i< N; i++){
        scanf("%d",&array[i]);
    }

    bubbleSort(array, N);


    return 0;
}