#include <stdio.h>

int main(){
    int N;
    

    scanf("%d", &N);

    char texto[N][202];

    

    for(int i = 0; i < N; i++){
        
        if(texto[0] == '\n'){
            fgets(texto[0],200,stdin);
        }else{
            fgets(texto[i],200,stdin);  
        }    
        
    }

printf("\n\n --- \n\n");

    for(int i = 0; i < N; i++){
        printf("impressao %d: ", i+1);
        printf("%s",texto[i]);      
    }







}
