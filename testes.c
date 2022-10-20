/*#include<stdio.h> ///EXCHANGE SORT
int main(void)
{
    int array[5], i, j, temp,n;


    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter %d numbers : ",n);

    for (i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }

    for(i = 0; i < (n -1); i++){
        for (j=(i + 1); j < n; j++){
            if (array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("Sorted array is : ");

    for (i = 0; i < n; i++){
        printf(" %d ",array[i]);
    }

    return 0;
}


#include<stdio.h> ///EXCHANGE SORT DO PROFESSOR <<<<<<

void imprime_vetor(int v[], int n){
    for( int i = 0; i < n; i++) printf("%d ", v[i]);
    printf("\n");
}

void exchange_sort(int v[], int n){

    for(int i = 0; i<= n-2; i++){
        imprime_vetor(v,n);
        for(int j = (i+1); j <= (n-1); j++){
                if(v[i] > v[j]){
                    int temp = v[i];
                    v[i] = v[j];
                    v[j] = temp;
                }
        }
    }
    imprime_vetor(v,n);

}

int main(){
    int n;
    scanf("%d", &n);
    int v[n];
    
    for (int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
   
    exchange_sort(v, n);

    return 0;

}
*/
/*



#include<stdio.h>
#include <string.h>

int main(){
  char texto[] = "André - Atacante - mil gols - campeão mundial - melhor que Pelé";
  char* pedaco;

  pedaco = strtok(texto, "-");

  while(pedaco != NULL){
    printf("%s\n", pedaco);

    pedaco = strtok(NULL, "-");
  }

  return 0;
}

#include<stdio.h>
#include <string.h>

int main(){

printf("\n");printf("\n");

  char texto[] = "um dois tres quatro cinco";
  char* pedaco;
  printf("texto original: %s\n", texto);

    pedaco = strtok(texto, " ");
    printf("texto pos funcao 1: %s\n", texto);
    printf("1 %s\n", pedaco);
    

    pedaco = strtok(NULL, " ");
    printf("texto pos funcao 2: %s\n", texto);
    printf("2 %s\n", pedaco);

    pedaco = strtok(NULL, " ");
    printf("texto pos funcao 3: %s\n", texto);
    printf("3 %s\n", pedaco);

printf("\n");printf("\n");
  return 0;
}
*/


#include <stdio.h>
#include <string.h>

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


    printf("Tamanho máximo: %d\n", tam_max(N, texto));
    printf("Tamanho mínimo: %d\n", tam_min(N, texto));
    printf("Tamanho médio: %.2f\n", tam_med(N, texto));
    printf("Tamanho mais proximo da media: %d\n", prox_med(N, texto));    
    
    return 0;
}