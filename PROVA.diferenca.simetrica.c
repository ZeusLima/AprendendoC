#include <stdio.h>


void zeraVetor(int array[], int tam){
    for(int i = 0; i < tam; i++){
        array[i] = 0;
    }
}


void recebeVetor(int array[], int tam){
    for(int i = 0; i < tam; i++){
        scanf("%d", &array[i]);
    }
}


void diferencaSimetrica(int array1[], int array2[], int tam1, int tam2){

    int tam3 = tam1 + tam2;
    int array3[tam3];

    zeraVetor(array3, tam3);

    int contDif = 0, contIg = 0;

    if(tam1 >= tam2){

        for(int j = 0; j < tam2; j++){
            for(int i = 0; i < tam1; i++){
                      if(array1[i] != array2[j]){
                        contDif++;
                      }
            }
            if(contDif == tam1){
                array3[j] = array1[j];
            }

        }
        
    }else{//tam2>tam1

        for(int i = 0; i < tam1; i++){
            for(int j = 0; j < tam2; j++){
                if(array2[j] != array1[i]){
                    contDif++;
                }
        }
        if(contDif == tam2){
                array3[i] = array1[i];
            }

    }

    }

    for(int i = 0; i < tam3; i++){
        if(array3[i] != 0){
            printf("%d ", array3[i]);
        }
    }
}




int main(){
    
    int N, M;

    scanf("$d",N);
    scanf("$d",M);


    int conjuntoN[N], conjuntoM[M];

    recebeVetor(conjuntoN,N);
    recebeVetor(conjuntoM,M);

    diferencaSimetrica(conjuntoN, conjuntoM, N, M);

    return 0;
}