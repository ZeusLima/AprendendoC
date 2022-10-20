#include <stdio.h>
#include <string.h>

typedef struct {

        int ano;
        char nome_modelo[100];

}carro;

int main(){
    
    int n=1;

printf("\n ----");    
printf("INSIRA A QUANTIDADE DE CARROS NO ESTOQUE:\n");

    //scanf("$d", &n);

    carro estoque[n];      
    carro interesse;

printf("\nINSIRA O NOME_MODELO SEGUIDO DO ANO DOS CARROS NO ESTOQUE:\n");

    for(int i = 0; i < n; i++){
        scanf("%s", estoque[i].nome_modelo);
        scanf("%d ", &estoque[i].ano);
    }

printf("\nINRIRA O NOME_MODELO SEGUIDO DO ANO DOS CARROS QUE SAO INTERESSE DO CLIENTE:\n");
    scanf("%s", &interesse.nome_modelo);
    scanf("%d", &interesse.ano);

printf("\nSEGUE DADOS INSERIDOS QUE SAO INTERESSE DO CLIENTE:\n");

printf("nome/modelo: %s\n", interesse.nome_modelo);
printf("ano: %d\n", interesse.ano);


printf("\n ----\n");   
    return 0;
}