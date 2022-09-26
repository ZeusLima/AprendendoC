#include <stdio.h>

void recebeVetor(int array[], int tam){

    for(int i = 0; i < tam; i++){
        scanf("%d", &array[i]);
    }
}


void imprimeVetor(int array[], int tam){
    for(int i = 0; i < tam; i++){
        printf("%d ", array[i]);

    }printf("\n");
}


void zeraVetor(int array[], int tam){
    for(int i = 0; i < tam; i++){
        array[i] = 0;
    }
}


int main(){
    int n = 4;
    int array[4]={2, 7, 4, 1};
    imprimeVetor(array,4);


    for(int j = 0; j< 100; j++){
        for(int i = 0; i < n-1; i ++){
                if(array[i-1] > array[i]){
                    int aux = array[i-1];
                    array[i-1] = array[i];
                    array[i] = aux;
                }
            }
    }

imprimeVetor(array,4);

return 0;
}
