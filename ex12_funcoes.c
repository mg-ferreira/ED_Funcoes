#include <stdio.h>

int scanVetor(float *v, int tam){
    for(int i=0; i<tam; ++i){
        for(int j=i+1; j<tam; ++j){
            if(v[i] == v[j])
                return 1;
        }
    }
    return 0;
}

int main(){
    // declaração de variáveis e definição do tamanho do vetor
    int n, flag;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    float v[n];

    // preenchimento do vetor com valores definidos pelo usuário
    for(int i=0; i<n; ++i){
        printf("Digite o %do. valor: ", i+1);
        scanf("%f", &v[i]);
    }

    // chamada da função
    flag = scanVetor(v, n);
    if(flag == 1)
        printf("O vetor possui valores iguais!\n");
    else
    printf("O vetor nao possui valores iguais!\n");

    return 0;
}