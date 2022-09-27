#include <stdio.h>

void imprimeVetor(int v[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
}

int main(){

    int n;

    scanf("%d", &n);

    int v[n];

    for(int i = 0; i < n; i++){
        scanf("%d ",v[i]);
    }

    imprimeVetor(v, n);


   return 0;
}