#include <stdio.h>

float alcancar(float X, float V1, float V2){
    float tempoDeAlcance;

    tempoDeAlcance = X / (V1 - V2);
    
    return tempoDeAlcance;
}


int main (){
    float x, v1, v2;
    
    scanf("%f %f %f", &x, &v1, &v2);

    if(alcancar(x, v1, v2) < 0){
        printf("impossivel\n");
    }else{
        printf("%.0fs",alcancar(x, v1, v2));
        
    }
    return 0;
}