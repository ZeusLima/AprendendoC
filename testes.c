/*#include<stdio.h> ///EXCHANGE SORT
int main(void)
{
    int array[5], i, j, temp,n;


    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter %d numbers : ",n);

    for (i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }

    for(i = 0; i < (n -1); i++){
        for (j=(i + 1); j < n; j++){
            if (array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("Sorted array is : ");

    for (i = 0; i < n; i++){
        printf(" %d ",array[i]);
    }

    return 0;
}
*/

#include<stdio.h> ///EXCHANGE SORT DO PROFESSOR <<<<<<

void imprime_vetor(int v[], int n){
    for( int i = 0; i < n; i++) printf("%d ", v[i]);
    printf("\n");
}

void exchange_sort(int v[], int n){

    for(int i = 0; i<= n-2; i++){
        imprime_vetor(v,n);
        for(int j = (i+1); j <= (n-1); j++){
                if(v[i] > v[j]){
                    int temp = v[i];
                    v[i] = v[j];
                    v[j] = temp;
                }
        }
    }
    imprime_vetor(v,n);

}

int main(){
    int n;
    scanf("%d", &n);
    int v[n];
    
    for (int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
   
    exchange_sort(v, n);

    return 0;

}
