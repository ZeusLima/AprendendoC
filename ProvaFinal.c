#include <stdio.h>

calcNota(float n1, float n2, float n3){
    float menorNota = n1, soma = (n1 + n2 + n3), media = soma/3.0;
    
    if (n2 < menorNota){
        menorNota = n2;
    }
    if(n3 < menorNota){
            menorNota = n3;
    }
    float j = (menorNota + 15 - soma);

    printf("\n\tDEPURANDO j QUEBRADO dentro da func>> %.f", j); //passando o valor correto
    

    return (n1 >= 3 && n2 >= 3 && n3 >= 3 && media < 5) ?  j : 0;
    
}


int fazProva(float n1, float n2, float n3){
    
    return (n1 >= 3 && n2 >= 3 && n3 >= 3 ) ?  1 : 0;
    
}


int main(){
    float x1, x2, x3, cN;
    int fP;

    scanf("%f %f %f", &x1, &x2, &x3);

    fP = fazProva(x1, x2, x3);
    cN = calcNota(x1, x2, x3);
    printf("\n\tDEPURANDO CN QUEBRADO>> %.1f", cN); // vi

/*    if (fP == 0){
        printf("Nao faz prova final");
    }else{
        cN = calcNota(x1, x2, x3);

        if (cN != 0){
            printf("Final\n%.1f", cN);
        }
    }
*/
    return 0;
}