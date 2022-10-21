#include <stdio.h>
#include <string.h>




typedef struct{
    char nome[202];
    int vitorias, empates, derrotas, gols_feitos, gols_sofridos;

    int pontos;//    =  vitorias*3 + empates;
    int partidas;//  = vitorias + empates + derrotas;
    int saldo_gols;// = gols_feitos - gols_sofridos;  

} time;

void read_line(char linha[], int tam, FILE* f){

  fgets(linha, tam, f);
  while(linha[0] == '\n') fgets(linha, tam, f);
  if(linha[strlen(linha)-1] == '\n') linha[strlen(linha)-1]='\0';

}


void recebe_times(int t, time v[]){
//printf("\n >> INSIRA NOME VITORIAS DERROAS GOLS FEITOS E SOFRIDOS RESPECTIVAMENTE:\n");

    for(int i = 0; i < t; i++){
        //read_line(v[i].nome, 200, stdin);

        //scanf("%s[^;]",v[i].nome);
        scanf("%200[^;]", v[i].nome);
        getchar();
        scanf("%d ", &v[i].vitorias);
        scanf("%d ", &v[i].empates);        
        scanf("%d ", &v[i].derrotas);        
        scanf("%d ", &v[i].gols_feitos);
        scanf("%d", &v[i].gols_sofridos);
        //getchar();
        v[i].pontos = v[i].vitorias*3 + v[i].empates;
        v[i].saldo_gols = v[i].gols_feitos - v[i].gols_sofridos;
        v[i].partidas = v[i].vitorias + v[i].empates + v[i].derrotas;
    }

}


void impressao(int t, time v[]){

//printf("\n\n TIME E DADOS INSERIDOS: \n");
    printf("Tabela do campeonato:\n");
    printf("Nome| Pontos| Jogos| Vitorias| Empates| Derrotas| Gols Pro| Gols Contra| Saldo de Gols");

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
        
    }printf("\n");

}


void bubbleSort( int n, time array[]){
    int flag=1;
    while(flag != 0){
        flag = 0;
        for(int i = 1; i <= n - 1; i ++){
                    if(array[i-1].pontos < array[i].pontos){
                        flag=1;
                        time aux = array[i-1];
                        array[i-1] = array[i];
                        array[i] = aux;
                }else{
                    if(array[i-1].pontos == array[i].pontos){
                        if(array[i-1].vitorias < array[i].vitorias){
                            flag=1;
                            time aux = array[i-1];
                            array[i-1] = array[i];
                            array[i] = aux;
                        }
                }if(array[i-1].vitorias == array[i].vitorias){
                    if(array[i-1].saldo_gols < array[i].saldo_gols){
                            flag=1;
                            time aux = array[i-1];
                            array[i-1] = array[i];
                            array[i] = aux;
                        }                    
                }
            }
       }
    }
}


void zona_liberta_rebaix( int n, time v[]){
    printf("\n");
    printf("Times na zona da libertadores:");

    for(int i=0;i<6; i++){
        printf("%s ", v[i].nome);
    }
    printf("\n\n");

    printf("Times rebaixados: ");
    for(int i=0;i<4; i++){
        printf("%s", v[n-1-i].nome);
    }

}

int main(){

//printf("\nTESTE ALHEIOn");

//printf("INSIRA A QUANTIDADE DE TIMES: 1");

 //int T=20;
    int T;
    scanf("%d", &T);

    time competidores[T];
//printf("\n-------\n");
    recebe_times(T, competidores);
//printf("\n-------\n");
    bubbleSort(T, competidores);

    impressao(T, competidores);

    zona_liberta_rebaix(T, competidores);



//printf("\n-------\n");
    return 0;
}