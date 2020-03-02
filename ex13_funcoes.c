#include <stdio.h>

void substituiVetor(char *v, char c, int tam){
    for(int i=0; i<tam; ++i){
        if(v[i] == c)
            v[i] = '*';
    }
}

int main(){
    // declaração de variáveis
    int tam=18;
    char v[] = {"Estrutura de Dados"}, c;
    
    // define um caractere a ser substituído
    printf("Digite o caractere a ser substituido: ");
    scanf("%c", &c);

    // chamada da função
    substituiVetor(v, c, tam);

    for(int i=0; i<tam; ++i){
        printf("%c", v[i]);
    }
    return 0;
}