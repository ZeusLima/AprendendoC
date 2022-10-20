#include <stdio.h>

#define MAX 50
typedef struct {
    int ra;
    char nome[MAX];
    float prova[3];
} teste;

int main() {
    int i;
    int j;
    teste aluno[2];

    for (i = 0; i < 2; i++) {
        printf("Determine o Nome do Aluno %d: ", i + 1);
        fgets(aluno[i].nome, MAX, stdin);

        printf("Determine a Matricula do Aluno &d: ", i + 1);
        scanf("%i", &aluno[i].ra);

        for (j = 0; j < 3; j++) {
            printf("Determine a nota da %d Prova: ", j + 1);
            scanf("%f", &aluno[i].prova[j]);
        }
    }
    return 0;
}
// scanf(" %[^\n]", nome  da stringa  a ser salva);