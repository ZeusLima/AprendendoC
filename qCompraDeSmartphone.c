#include <stdio.h>

typedef struct{

    char modelo[40];
    int memoria;
    float processador, camera, bateria;
}Smartphone;


int cadastraSmarphone(int qnt_cadastrada, Smartphone phones[]){


    scanf(" %[^\n]s", phones[qnt_cadastrada].modelo);
    //getchar();
    scanf(" %d %f %f %f",   &phones[qnt_cadastrada].memoria,
                            &phones[qnt_cadastrada].processador,
                            &phones[qnt_cadastrada].camera,
                            &phones[qnt_cadastrada].bateria);


    qnt_cadastrada += 1;

    return qnt_cadastrada;

}

void pesquisaSmartphone(Smartphone lista[],int contadorDeCadastrados){

    int memo;
    float proc, cam, bat;
    int contReqsMin = 0;

    scanf(" %d %f %f %f", &memo, &proc, &cam, &bat);

    for(int i = 0; i < contadorDeCadastrados; i++){
        if(lista[i].memoria >= memo && lista[i].processador >= proc && lista[i].camera >= cam && lista[i].bateria >= bat){

            contReqsMin += 1;

            printf("Modelo: %s\n", lista[i].modelo);
            printf("Memoria: %dGB\n", lista[i].memoria);
            printf("Processador: %.2fGhz\n", lista[i].processador);
            printf("Camera: %.2fMPixels\n", lista[i].camera);
            printf("Bateria: %.2fmA\n\n", lista[i].bateria);

        }

    }
    printf("%d smartphones encontrados.", contReqsMin);

}

int main(){

    char resposta;
    int cont=0;
    int contaCadastradoClandestino = 0;
    Smartphone lista[40];


    scanf(" %c", &resposta);
    //if (resposta == 's'){contaCadastradoClandestino += 1;}

    while(resposta == 's'){

        cont = cadastraSmarphone(cont,lista);

        scanf(" %c", &resposta);
        //if (resposta == 's'){contaCadastradoClandestino += 1;}
   
    }

    pesquisaSmartphone(lista, cont);

    return 0;
}


/*#include <stdio.h>


typedef struct{

    char modelo[40];
    int memoria;
    float processador, camera, bateria;
}Smartphone;


int cadastraSmarphone(int qnt_cadastrada, Smartphone phones[]){


//printf("\n>>>>> INFORME O NOME - MEMO - PROCESS - CAMR - BAT DO CEL: \n");

    scanf(" %[^\n]s", phones[qnt_cadastrada].modelo);
    //getchar();
    scanf(" %d %f %f %f",   &phones[qnt_cadastrada].memoria,
                            &phones[qnt_cadastrada].processador,
                            &phones[qnt_cadastrada].camera,
                            &phones[qnt_cadastrada].bateria);


//printf("\n-----CONTADOR antes de add TÁ EM >>>>> %d\n", qnt_cadastrada);

    qnt_cadastrada += 1;

//printf("\n-----CONTADOR da func dps  de acrescido Ta EM e sendo ret >>>>> %d\n", qnt_cadastrada);

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

void pesquisaSmartphone(Smartphone lista[],int contadorDeCadastrados){

//printf("\nVERIFICANDO FUNCIONALIDADE DA FUNC PESQUISA REQ MIN EM SMARTPn");

    int memo;
    float proc, cam, bat;
    int contReqsMin = 0;

    scanf(" %d %f %f %f",   &memo, &proc, &cam, &bat);

    for(int i = 0; i < contadorDeCadastrados; i++){
        if(lista[i].memoria >= memo && lista[i].processador >= proc && lista[i].camera >= cam && lista[i].bateria >= bat){

            contReqsMin += 1;

            printf("Modelo: %s\n", lista[i].modelo);
            printf("Memoria: %dGb\n", lista[i].memoria);
            printf("Processador: %2.fGhz\n", lista[i].processador);
            printf("Camera: %2.fMPixels\n", lista[i].camera);
            printf("Bateria: %2.fmA\n\n", lista[i].bateria);

        }

    }
    printf("%d smartphones encontrados.", contReqsMin);

}





RECEBIMENTO DE STRING PARA STRUCT PASSADO PELOS COLEGAS DE CLASSE
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



int main(){
//printf("\n-------\n");
    char resposta;
    int cont;
    int contaCadastradoClandestino = 0;
    Smartphone lista[40]={0};
    //Smartphone reqMin;
    //reqMin.nome = "ReqMin";

    scanf("%s", &resposta);
    if (resposta == 's'){contaCadastradoClandestino += 1;}

    while(resposta == 's'){

//rintf("-----IMPRIMINDO CONT POS primeiro S e pos primeiro while: %d\n", cont);

        cont = cadastraSmarphone(cont,lista);
        
        
//printf("-----IMPRIMINDO CONT POS SAIDA DA FUNC: %d\n", cont);

        scanf("%s", &resposta);
        if (resposta == 's'){contaCadastradoClandestino += 1;}
//printf("-----IMPRIMINDO CONT POS receber segundo S: %d\n", cont);        
    }
   //printf("-----IMPRIMINDO CONT ANTES DA FUNC DE IMPRE >> %d", cont);
    //impressao_de_teste(cont, lista);

   
    pesquisaSmartphone(lista, cont);





//printf("\n-----FIM DO PROGRAMA-------\n");
    return 0;
}

*/