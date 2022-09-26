#include <stdio.h>

int ehPrimo (int x){
    int cont = 0;

        for(int i = 1; i <= x; i++){
            if(x % i == 0){
                cont++;
            }  
       }
    return (cont != 2) ?  0 : 1;
}

int ehPrimoG(int q){
    return (ehPrimo(q) && ehPrimo(q + 2)) ? 1 :  0;
}

int main(){
    int n;
     scanf("%d", &n);

     ehPrimo(n) && ehPrimoG(n) ? printf("Numero forma par de gemeos") : printf("Numero nao forma par de gemeos");

    return 0;
}