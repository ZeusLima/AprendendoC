#include <stdio.h>

int main(){
/*

declara-se strings como vetor 

ex: char string[tamanho];

inicializar a string garante que ela tenha o \0 no final
inicialização -->   string[tamanho] = {0};

no final da string, coloca-se o /0 isso irá diferenciar uma string de um vetor de caracteres

o place holder da string usa-se o %s

dentro do scanf isso irá permitir receber palavras inteiras, entretanto, caso use-se qualquer tipo de espaço em branco, será ignorado o que vier após
para resolver isso, pode-se usar vários scanf com um laço e/ou afins

a melhor forma de se fazer é usar a função a seguir:

fgets(1º parametro: string, 2º parametro: número de caracteres com uma margem de segurança para o \0, 3ºparametro: fonte de se onde vai ler pois pode ser usado de arquivos também)
para o 3º parametro, como estamos vendo entrada e saída padrão usa-se o 'stdin'

dentro do scanf NÃO se coloca o &string (e comercial) para recebê-lo



*/

char texto[100];

fgets(texto, 99, stdin);

printf("%s", texto);
    return 0;
}