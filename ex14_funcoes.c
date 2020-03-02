#include <stdio.h>

int verificaVetor(int *v, int tam){
    for(int i=0; i<tam; ++i){
        for(int j=i+1; j<tam; ++j){
            if(v[i] > v[j])
                return 1;
        }
    }
    return 0;
}

int defineVetor(){
    int tam, flag;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    int v[tam];
    for(int i=0; i<tam; ++i){
        printf("Digite o %do. valor: ", i+1);
        scanf("%d", &v[i]);
    }
    flag = verificaVetor(v, tam);
    return flag;
}

int main(){
    int flag;

    flag = defineVetor();
    if(flag == 0)
        printf("O vetor esta em ordem crescente!\n");
    else
        printf("O vetor nao esta ordenado!\n");
    return 0;
}