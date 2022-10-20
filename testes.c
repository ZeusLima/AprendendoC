#include <stdio.h>
#include <string.h>


typedef struct{
    char nome[202];
    int vitorias;

} time;


void recebe_times(int t, time v[]){
printf("\n <<< INSIRA NOME VITORIAS DERROAS GOLS FEITOS E SOFRIDOS RESPECTIVAMENTE:\n");
// não funciona..?

    for(int i = 0; i < t; i++){
        scanf("%s[^;] ", v[i].nome);
        scanf("%d", &v[i].vitorias);
    }
}


void impressao(int t, time v[]){

printf("\n\n >>> TIME E DADOS INSERIDOS: \n");

    printf("Nome| Vitorias\n");

    for(int i = 0; i < t; i++){
        
        //iniciando for de teste para impressão

        for(int j = 0; j < strlen(v[i].nome);j++){
            if(v[i].nome[j] != ';') {
                printf("%c",v[i].nome[j]);
                }
        }


        //finalizando for de teste para impressão
        

        //printf("%s| ",v[i].nome); não funciona para a questão porque imprime o ';' junto

        printf(" %d| ", v[i].vitorias);

        printf("\n");
    }
}




    int main(){

printf("\n-------\n");

printf("INSIRA A QUANTIDADE DE TIMES: ");

    int T=1;
printf("INSIRA A QUANTIDADE DE TIMES: %d", T);
    //scanf("%d", &T);

    time competidores[T];
printf("\n-------\n");
    recebe_times(T, competidores);
printf("\n-------\n");

    impressao(T, competidores);

printf("\n-------\n");
    return 0;
}