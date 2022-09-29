#include <stdio.h>

int main(){
    int M, N;

    scanf("%d %d", &M, &N);

    char mapa[N][M], op;
    int tamanhoMapa = N * M;
    float contTil = 0.0, contCircunflexo  = 0.0, contAsterisco  = 0.0, contPonto  = 0.0;
    float PcontTil = 0.0, PcontCircunflexo  = 0.0, PcontAsterisco  = 0.0, PcontPonto  = 0.0;//porcentagens

     for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf(" %c", &mapa[i][j]);

            op = mapa[i][j];

            switch (op){
                case 'X':
                    printf("Planeta Hostil");
                    return 0;
                case '~':
                    contTil = contTil + 1.0;
                    break;
                case '^':
                    contCircunflexo = contCircunflexo + 1.0;
                    break;
                case '*':
                    contAsterisco = contAsterisco + 1.0;
                case '.':
                    contPonto = contPonto + 1.0;
                    break;
                default:
                break;
            }
        }
    }

    PcontTil = contTil / (M * N);                  // printf("\n\nPconTil: %.2f\n", PcontTil);
    PcontCircunflexo  = contCircunflexo / (M * N); // printf("PcontCircunflexo: %.2f\n", PcontCircunflexo);
    PcontAsterisco  = contAsterisco / (M * N);     // printf("PcontAsterisco: %.2f\n", PcontAsterisco);
    PcontPonto  = contPonto / (M * N);             // printf("\n\nPcontPonto: %.2f\n\n", PcontPonto);

    if( PcontTil >= (1.0/2.0) && PcontAsterisco >= (1.0/5.0)){
        printf("Planeta Classe M");
    }else{
        if(PcontTil >= 85.0/100.0){
            printf("Planeta Aquático");
        }else{
            if(PcontCircunflexo >= 60.0/100.0){
            printf("Planeta Desértico");
            }else{
                if(PcontAsterisco >= 65.0/100.0){
                printf("Planeta Selvagem");
                }else{
                        printf("Planeta Inóspito");
                }
            }
        }        
    }
   return 0;
}