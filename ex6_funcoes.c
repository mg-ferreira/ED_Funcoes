#include <stdio.h>

void retornaMes(int n){
    switch(n){
        case 1:
            printf("Janeiro\n");
            break;
        case 2:
            printf("Fevereiro\n");
            break;
        case 3:
            printf("Marco\n");
            break;
        default:
            printf("Valor invalido!\n");
            break;
    }
}

void recebeValor(){
    int a;
    printf("Digite um numero entre 1 e 3, inclusive: ");
    scanf("%d", &a);
    retornaMes(a);
}

int main(){
    recebeValor();
    return 0;
}