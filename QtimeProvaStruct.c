#include <stdio.h>
#include <string.h>


typedef struct{
    char nome[202];
    int gols_marcados, gols_sofridos;

} time;


void recebe_times(int t, time v[]){
//printf("\n >> INSIRA OS DADOS DOS TIMES:\n");


    for(int i = 0; i < t; i++){
        scanf(" %[^\n]",v[i].nome);
        //fgets(v[i].nome,200,stdin); ??????      
        scanf("%d ", &v[i].gols_marcados);
        scanf("%d", &v[i].gols_sofridos);

    }

}


void impressao(int t, time v[]){

//printf("\n\n TIME E DADOS INSERIDOS: \n");


    for(int i = 0; i < t; i++){
        printf("%d - %s\n",i + 1, v[i].nome);
        printf("Gols marcados: %d\n", v[i].gols_marcados);
        printf("Gols sofridos: %d\n", v[i].gols_sofridos);

    }
}


void bubbleSort( int n, time array[]){
    int flag=1;
    while(flag != 0){
        flag = 0;
        for(int i = 1; i <= n - 1; i ++){
                    if(array[i-1].gols_marcados < array[i].gols_marcados){
                        flag=1;
                        time aux = array[i-1];
                        array[i-1] = array[i];
                        array[i] = aux;
                }
            }

    }
}

int main(){

printf("\n-------\n");

//printf("INSIRA A QUANTIDADE DE TIMES:");

    int T;
    scanf("%d", &T);

    time competidores[T];

    recebe_times(T, competidores);

    bubbleSort(T, competidores);

    impressao(T, competidores);

printf("\n-------\n");
    return 0;
}