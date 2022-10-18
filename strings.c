
/*

declara-se strings como vetor 

ex: char string[tamanho];

inicializar a string garante que ela tenha o \0 no final
inicialização -->   string[tamanho] = {0};

no final da string, coloca-se o /0 isso irá diferenciar uma string de um vetor de caracteres

o place holder da string usa-se o %s

dentro do scanf isso irá permitir receber palavras inteiras, entretanto, caso use-se qualquer tipo de espaço em branco, será ignorado o que vier após
para resolver isso, pode-se usar vários scanf com um laço e/ou afins o que não é aconselhável

a melhor forma de se fazer é usar a função a seguir:

fgets(1º parametro: string, 2º parametro: número de caracteres com uma margem de segurança para o \0(uma casa a mais), 3ºparametro: fonte de se onde vai ler pois pode ser usado de arquivos também)
para o 3º parametro, como estamos vendo entrada e saída padrão usa-se o 'stdin'

o fgets recebe também o \n no final e só após dele ele acrescentará o \0 (minuto 13 da aula de strings)

dentro do scanf NÃO se coloca o &string (e comercial) para recebê-lo


 ------
 ssacnf > usado para pegar entradas padronizadas de um texto
 ex:
 sscanf(parametro1: string de onde vai ser consumido, parametro2: placeholders por tipo %d %c %s..., parametro3: variaveis que irão receber o que foi lido)

char texto[100];

fgets(texto, 99, stdin);

printf("%s", texto);

*/

#include <stdio.h>

#define TAM 100 //quantidade de consultas
#define MAX_TEXTO 101 //tamanho máximo das consultas


void carrega_base(int posicao, char base[TAM][MAX_TEXTO]){
    int tamanho;

    fgets(base[posicao], TAM, stdin); /// por que nesse fgets o parâmtro não foi passado por completo????
                                      // cada consulta fica em uma linha
    
    tamanho = strlen(base[posicao]);
    base[posicao][tamanho-1] = '\0';    // como o fgets inclui também o \n poderemos assim troca ele pelo \0


}

void imprime(char palavra, int n, char tabela[][MAX_TEXTO] ){

    for(int i = 0; i < n; i++){
        strcat(tabela[i], palavra);
    }



}


int main(){

    char consultas[TAM][MAX_TEXTO] = {0};

    int N, C;
    char string[MAX_TEXTO];

    //scanf("%d", &N); // se feito desta forma, o enter(\n) dado para confirmar o inteiro será incluído  dentro do fgets da função a seguir. Para evitar isso, inclui-se o \n

    scanf("%d\n", &N);

     for(int i = 0; i< N; i++){
        carrega_base(i, consultas);
     }

    scanf("%d\n", &C);

    for(int i = 0; i < C; i++){
        fgets(string,MAX_TEXTO,stdin);
    }

    imprimeSugestoes(string, N, consultas);

    printf("\n");




    

}
