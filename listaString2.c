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


int prox_med(int n, char matriz[][202]){ //tanto espaços quanto underline são incluídos
    float tammanho_medio = tam_med(n, matriz);
    char * pedaco;
    int len_txt_mais_prox = 0;
    

    pedaco = strtok(matriz[0], " ");

    char texto_mais_prox = pedaco;
    len_txt_mais_prox = strlen(texto_mais_prox);

    
    while(pedaco != NULL){
        
    pedaco = strtok(NULL, "-");

    if( (strlen(pedaco) > len_txt_mais_prox && strlen(pedaco) < tammanho_medio) || //ou
        (strlen(pedaco) < len_txt_mais_prox && strlen(pedaco) > tammanho_medio)) { /*o tamanho da palavra cortada mais uma vez for mais proximo da media, ele vira o mais próximo da media*/
        texto_mais_prox = pedaco;
        len_txt_mais_prox = strlen(texto_mais_prox);
    }
  }
    //printf("%s", texto_mais_prox);
    return len_txt_mais_prox;
}



int main(){
    int N;
    

    scanf("%d ", &N);

    char texto[N][202];

    recebe_textos(N, texto);
    printf("\n------\n");
    //imprime_matriz_textos(N,texto);


    //printf("Tamanho mAximo: %d\n", tam_max(N, texto));
    //printf("Tamanho mInimo: %d\n", tam_min(N, texto));
    //printf("Tamanho mEdio: %.2f\n", tam_med(N, texto));
    printf("Tamanho mais prOximo da mEdia: %d", prox_med(N, texto));
    
    return 0;
}
