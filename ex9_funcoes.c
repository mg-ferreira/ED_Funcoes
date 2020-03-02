#include <stdio.h>

void recebeCaractere(){
    char c;
    printf("Digite um caractere: ");
    scanf("%c", &c);
    if(c==65 || c==69 || c==73 || c==79 || c==85 || c==97 || c==101 || c==105 || c==111 || c==117)
        printf("O caractere digitado eh uma vogal.\n");
    else
        printf("O caractere digitado nao eh uma vogal.\n");
}
int main(){
    recebeCaractere();
    return 0;
}