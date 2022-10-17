#include <stdio.h>

void CamelCase(int tam, char stringzada[tam]){

    for(int i = 0; i < 60; i++){
        
        stringzada[0] = toupper(stringzada[0]);

        if(stringzada[i] == ' '){
            stringzada[i+1] = toupper(stringzada[i+1]);
        }
    }

    printf("%s", stringzada);


}

int main(){
    int tamanho = 61;
    char texto[tamanho];
    
    fgets(texto, 60, stdin);

    CamelCase(tamanho, texto);

    return 0;
}