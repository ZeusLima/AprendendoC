#include <stdio.h>


int main(){
    int M=4, N=4;

    ///scanf("%d %d", &M, &N);
    char mapa[N][M], op ='o';
    int tamanhoMapa = N * M;
    float contTil = 0.0, contCircunflexo  = 0.0, contAsterisco  = 0.0, contPonto  = 0.0;
    float PcontTil = 0.0, PcontCircunflexo  = 0.0, PcontAsterisco  = 0.0, PcontPonto  = 0.0;

    int enter = '\n';




///printf("VALIDACAO DE ENTRADAS - DEPURACAO:\nI: %d\nJ: %d\nPIXEL MAPA: >%c<\n", i, j, mapa[i][j]);
printf("\n\n------- INSIRA O MAPA :\n");

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
           ///scanf("%c", &mapa[i][j]);

            while(mapa[i][j]== '\n'){
                scanf("%c", &mapa[i][j]);
            }
            
            if(mapa[i][j]== '\n'){j--;}

            if (mapa[i][j] == 'X'){
                printf("Planeta Hostil");
                return 0;
            }else{
                if(mapa[i][j] == '~'){
                    contTil = contTil + 1.0;
                    printf("ACRESCENTANDO ~: %f\n", contTil);
                }
                if(mapa[i][j] == '^'){
                    contCircunflexo = contCircunflexo + 1.0;
                    printf("ACRESCENTANDO ^: %f\n", contCircunflexo);
                }
                if(mapa[i][j] == '*'){
                    contAsterisco = contAsterisco + 1.0;
                    printf("ACRESCENTANDO *: %f\n", contAsterisco);
                }        
                if(mapa[i][j] == '.'){
                    contPonto = contPonto + 1.0;
                    printf("ACRESCENTANDO .: %f\n", contPonto);
                }
                        }
        }
    }

for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%c", mapa[i][j]);
        }printf("\n");}

printf("\n");printf("\n");printf("\n");


/*

for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            op = mapa[i][j];
            switch (op){
            case 'X':
                printf("Planeta Hostil");
                return 0;
            case '~':
                contTil = contTil + 1.0;
                printf("ACRESCENTANDO ~: %f\n", contTil);
                break;
            case '^':
                contCircunflexo = contCircunflexo + 1.0;
                printf("ACRESCENTANDO ^\n", contCircunflexo);
                break;
            case '*':
                contAsterisco = contAsterisco + 1.0;
                printf("ACRESCENTANDO *\n", contAsterisco);
            case '.':
                contPonto = contPonto + 1.0;
                printf("ACRESCENTANDO .\n", contPonto);
                break;
            default:
                /// código sem mensagem de validação e/ou reinserção de dado. Nada a se fazer...
            break;
            }
        }
    }





PcontTil = contTil / (M * N);                   printf("\n\nPconTil: %.2f\n", PcontTil);
PcontCircunflexo  = contCircunflexo / (M * N);  printf("PcontCircunflexo: %.2f\n", PcontCircunflexo);
PcontAsterisco  = contAsterisco / (M * N);      printf("PcontAsterisco: %.2f\n", PcontAsterisco);
PcontPonto  = contPonto / (M * N);              printf("PcontPonto: %.2f\n\n", PcontPonto);

    if( PcontTil >= (1.0/2.0) && PcontAsterisco >= (1.0/5.0)){
printf("----------------------------- SE PCONTIL -> %.2f<-  MAIOR.IGUAL (%.2f) EEE  PcontAsterisco-> %.2f<- MAIOR.IGUAL (%.2f)\n\n", PcontTil, (1.0/2.0), PcontAsterisco, (1.0/5.0));
        printf("Planeta Classe M");
    }else{
printf("----------------------------- SE PCONTIL -> %.2f<-  MAIOR.IGUAL (1.0/2.0) EEE  PcontAsterisco-> %.2f<- MAIOR.IGUAL (%.2f)n\n", PcontTil, PcontAsterisco);
        printf("Planeta Hostil");
    }

   */ return 0;
}