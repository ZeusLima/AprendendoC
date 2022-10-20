#include <stdio.h>
#include <string.h>


typedef struct{
    char nome[202];
    int vitorias, empates, derrotas, gols_feitos, gols_sofridos;

    int pontos;//    =  vitorias*3 + empates;
    int partidas;//  = vitorias + empates + derrotas;
    int saldo_gols;// = gols_feitos - gols_sofridos;  

} time;


void recebe_times(int t, time v[]){
printf("\n >> INSIRA NOME VITORIAS DERROAS GOLS FEITOS E SOFRIDOS RESPECTIVAMENTE:\n");
// não funciona..?

    for(int i = 0; i < t; i++){
        scanf("%s[^;]",v[i].nome);

        scanf(" %d", &v[i].vitorias);
        scanf(" %d", &v[i].empates);        
        scanf(" %d", &v[i].derrotas);        
        scanf(" %d", &v[i].gols_feitos);
        scanf(" %d", &v[i].gols_sofridos);

        v[i].pontos = v[i].vitorias*3 + v[i].empates;
        v[i].saldo_gols = v[i].gols_feitos - v[i].gols_sofridos;
        v[i].partidas = v[i].vitorias + v[i].empates + v[i].derrotas;
    }

}


void impressao(int t, time v[]){

printf("\n\n TIME E DADOS INSERIDOS: \n");

    printf("Nome| Pontos| Jogos| Vitorias| Empates| Derrotas| GolsPro| GolsContra| Saldo de Gols\n");

    for(int i = 0; i < t; i++){
        printf("%s| ",v[i].nome);
        printf("%d| ", v[i].pontos);
        printf("%d| ", v[i].partidas);
        printf("%d| ", v[i].vitorias);
        printf("%d| ", v[i].empates);
        printf("%d| ", v[i].derrotas);
        printf("%d| ", v[i].gols_feitos);
        printf("%d| ", v[i].gols_sofridos);
        printf("%d ", v[i].saldo_gols);
        printf("\n");
    }
}


void bubbleSort( int n, time array[]){
    int flag=1;
    while(flag != 0){
        flag = 0;
        for(int i = 1; i <= n - 1; i ++){
                    if(array[i-1].pontos > array[i].pontos){
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

printf("INSIRA A QUANTIDADE DE TIMES: 1");

    int T=1;

    //scanf("%d", &T);

    time competidores[T];
printf("\n-------\n");
    recebe_times(T, competidores);
printf("\n-------\n");
    bubbleSort(T, competidores);

    impressao(T, competidores);

printf("\n-------\n");
    return 0;
}