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
            printf("Memoria: %dGb\n", lista[i].memoria);
            printf("Processador: %2.fGhz\n", lista[i].processador);
            printf("Camera: %2.fMPixels\n", lista[i].camera);
            printf("Bateria: %2.fmA\n\n", lista[i].bateria);

        }

    }
    printf("%d smartphones encontrados.", contReqsMin);

}

int main(){

    char resposta;
    int cont;
    int contaCadastradoClandestino = 0;
    Smartphone lista[40]={0};


    scanf(" %c", &resposta);


    while(resposta == 's'){

        cont = cadastraSmarphone(cont,lista);

        scanf(" %c", &resposta);
   
    }

    pesquisaSmartphone(lista, cont);

    return 0;
}
