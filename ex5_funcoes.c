#include <stdio.h>

int maiorvalor(){
    int a, b;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    while(1){
        printf("Digite um valor diferente do primeiro: ");
        scanf("%d", &b);
        if(a!=b)
            break;
    }
    return a > b ? a : b;
}

int main(){
    int maior;
    maior = maiorvalor();
    printf("O maior valor digitado foi %d\n", maior);
    return 0;
}