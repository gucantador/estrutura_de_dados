#include <stdio.h>

int main(){

    
    int qtd;
    

    printf("Digite um numero: ");
    scanf("%d", &qtd);


    int largura=qtd, altura=qtd, i=0, f;

    

    while(i<altura){
        printf("*");
        
        if (i>0){
            printf("\n");
            altura = altura-1;
            i= altura;
        }
        if (i==0){
            break;
        }
        
    }

    

}