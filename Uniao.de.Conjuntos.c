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

}


void zeraVetor(int array[], int tam){
    for(int i = 0; i < tam; i++){
        array[i] = 0;
    }
}

void uniaoVetor(int arrayA[], int arrayB[], int arrayU[], int tamA, int tamB, int tamU){
    int contIguais;

    for(int i = 0; i < tamA; i++){ ///COPIANDO O PRIMEIRO VETOR TODO PARA O VETOR UNIAO;
        arrayU[i] = arrayA[i];
    }
    


    for(int i = 0; i < tamB ; i++){
        contIguais = 0;
        for(int j = 0; j < tamU; j++){
            if(arrayU[j] == arrayB[i]){
                contIguais++;
            }
        }
        if(contIguais == 0){
            arrayU[tamB + 1] = arrayB[i];
        }
    }

    for(int i = 0; i <tamU; i++){
        if(arrayU[i] != 0) printf("%d ", arrayU[i]);
    }

}



int main(){

    int tamCA, tamCB, tamU;
    
    scanf("%d", &tamCA);
    scanf("%d", &tamCB);

    tamU = tamCA + tamCB;

    int cA[tamCA], cB[tamCB], cU[tamU];

    zeraVetor(cU, tamU);
    
    recebeVetor(cA, tamCA);
    recebeVetor(cB, tamCB);

    uniaoVetor(cA, cB, cU, tamCA, tamCB, tamU);

    return 0;
}