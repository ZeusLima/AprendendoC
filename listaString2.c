#include <stdio.h>
#include <string.h>


void imprime_matriz_textos(int n, char matriz[][202]){
    
    for(int i = 0; i < n; i++){
        //printf("impressao %d: ", i+1);
        printf("%s",matriz[i]);      
    }

}


void recebe_textos(int n, char matriz[][202]){

    for(int i = 0; i < n; i++){
        fgets(matriz[i],200,stdin);  
    }
}


int tam_max(int n, char matriz[][202]){
    int maior = strlen(matriz[0])-1;

    for(int i = 0; i < n; i++){
        if(strlen(matriz[i]) - 1 > maior){
            maior = strlen(matriz[i]) - 1;
            }
    }
    return maior;
}


int tam_min(int n, char matriz[][202]){

    int menor = strlen(matriz[0]) - 1;

    for(int i = 0; i < n; i++){
        if(strlen(matriz[i]) - 1 < menor){
            menor = strlen(matriz[i]) - 1;
            }
    }
    return menor;
}




float tam_med(int n, char matriz[][202]){
    float soma = 0.0;

    for(int i = 0; i < n; i++){
        soma += (strlen(matriz[i]) - 1);
    }
    return soma/n;
}


int prox_med(int n, char matriz[][202]){ //o espacço não é considerado enquanto o underline é considerado
    float med = tam_med(n, matriz); 
    int espaço = 0, underline = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; i++){
            if(matriz[i][j] == "_"){
                
            }
        }
    }


}



int main(){
    int N;
    

    scanf("%d ", &N);

    char texto[N][202];

    recebe_textos(N, texto);
    printf("\n------\n");
    //imprime_matriz_textos(N,texto);


    printf("Tamanho máximo: %d\n", tam_max(N, texto));
    printf("Tamanho mínimo: %d\n", tam_min(N, texto));
    printf("Tamanho médio: %.2f\n", tam_med(N, texto));
    

}
