#include <stdio.h>

int main(){

    
    int qtd;
    

    printf("Digite um numero: ");
    scanf("%d", &qtd);


    int largura=qtd, altura=qtd, i=0, f;

    for(i=0; i<altura; i++){
        f = largura;
        for(f; f>0; f--){
            printf("*");
        }
        largura = largura-1;
        printf("\n");
    }

    

}