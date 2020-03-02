#include <stdio.h>

void inverteVetor(int *vetor, int tam){
    int aux;
    for(int i=0; i<tam, i<(tam-1-i); ++i){
        aux = vetor[i];
        vetor[i] = vetor[(tam-1)-i];
        vetor[(tam-1)-i] = aux;
    }
}

int main(){
    // declaração de variáveis e definição do tamanho do vetor
    int n, aux;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int v[n];

    // preenchimento do vetor pelo usuário
    for(int i = 0; i < n; ++i){
        printf("Digite o %do. valor: ", i+1);
        scanf("%d", &v[i]);
    }

    // chamada da função
    inverteVetor(v, n);

    // impressão do vetor invertido
    for(int i=0; i<n; ++i){
        printf("%d ", v[i]);
    }
    return 0;
}