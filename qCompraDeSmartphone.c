#include <stdio.h>


typedef struct{

    char modelo[40];
    int memoria;
    float processador, camera, bateria;
}Smartphone;


int cadastraSmarphone(int qnt_cadastrada, Smartphone phones[]){


printf("\n>>>>> INFORME O NOME - MEMO - PROCESS - CAMR - BAT DO CEL: \n");

    scanf(" %[^\n]s", phones[qnt_cadastrada].modelo);
    getchar();
    scanf(" %d %f %f %f",   &phones[qnt_cadastrada].memoria,
                            &phones[qnt_cadastrada].processador,
                            &phones[qnt_cadastrada].camera,
                            &phones[qnt_cadastrada].bateria);


printf("\n-----CONTADOR antes de add TÁ EM >>>>> %d\n", qnt_cadastrada);

    qnt_cadastrada += 1;

printf("\n-----CONTADOR da func dps  de acrescido Ta EM e sendo ret >>>>> %d\n", qnt_cadastrada);

    return qnt_cadastrada;

}


void impressao_de_teste(int c, Smartphone phones[]){
printf("\n");
printf("-----SEGUE DADOS CADSTRADOS: \n");
printf("\n-----IMPRESSAO DA FNC DE TESTE VAI ATE>>> %d\n", c);
   for(int i = 0; i < c; i++){

    printf("Modelo: %s\n", phones[i].modelo );    
    printf("Memoria: %d\n", phones[i].memoria);    
    printf("Processador: %f\n",  phones[i].processador);    
    printf("Camera: %f\n",  phones[i].camera);
    printf("Bateria: %f\n",  phones[i].bateria);
    printf("-------\\n");
   }

}


/*RECEBIMENTO DE STRING PARA STRUCT PASSADO PELOS COLEGAS DE CLASSE
void recebe_algo(int t, time v[]){
printf("\n >> INSIRA AS INFO NECESSÁRIAS:\n");

    for(int i = 0; i < t; i++){

        scanf("%200[^;]", v[i].nome);
        getchar();

        scanf("%d ", &v[i].vitorias);
        scanf("%d ", &v[i].empates);        
        scanf("%d ", &v[i].derrotas);        

    }

}

*/

int main(){
printf("\n-------\n");
    char resposta;
    int cont;
    
    Smartphone lista[40]={0};

    scanf("%s", &resposta);
printf("-----IMPRIMINDO CONT POS primeiro S: %d\n", cont);
    while(resposta == 's'){

printf("-----IMPRIMINDO CONT POS primeiro S e pos primeiro while: %d\n", cont);

        cont = cadastraSmarphone(cont,lista);
        
printf("-----IMPRIMINDO CONT POS SAIDA DA FUNC: %d\n", cont);

        scanf("%s", &resposta);
printf("-----IMPRIMINDO CONT POS receber segundo S: %d\n", cont);        
    }
   //printf("-----IMPRIMINDO CONT ANTES DA FUNC DE IMPRE >> %d", cont);
    //impressao_de_teste(cont, lista);




printf("\n-----FIM DO PROGRAMA-------\n");
    return 0;
}