#include <stdio.h>


typedef struct  {
    char nome[100];
    char status;
    float n1, n2, n3, media;
} aluno;


void calcula_media(int n, aluno v_alunos[]){
    for(int i = 0; i < n; i++){
        v_alunos[i].media = (v_alunos[i].n1 + v_alunos[i].n2 + v_alunos[i].n3)/3;
    }

}
//void calcula_status(int n, aluno v_alunos[]);
void imprime_diario(int n, aluno v_alunos[]){

    for(int i = 0; i < n; i++){
        printf("Aluno %d\n:", i);
        printf("Nome: %s\n", v_alunos[i].nome);
        printf("Notas: %.2f %.2f %.2f\n", v_alunos[i].n1, v_alunos[i].n2, v_alunos[i].n3 );
    }

}


int main(){

    int n;
    
    printf("Digite a quantidade de alunos: ");

    scanf("%d\n", &n);
   

    aluno v_alunos[n]; //um vetor de 'n' casas do tipo 'aluno'

    for(int i = 0; i < n; i++){
        printf("Digite o nome do aluno %d: ", i);
        fgets(v_alunos[i].nome, 99, stdin);
        printf("Digite as três notas do aluno: ");
        scanf("%f %f %f\n", &v_alunos[i].n1, &v_alunos[i].n2, &v_alunos[i].n3);

    }

    imprime_diario(n, v_alunos);

    return 0;
}