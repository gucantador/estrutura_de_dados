#include <stdio.h>
#include <stdlib.h>

void carrega_vetor(int vetor[6]);
void mostra_vetor(int vetor[6]);

int main(){
    int vetor_principal[6];
    carrega_vetor(vetor_principal);
    mostra_vetor(vetor_principal);
    return 0;
}

void carrega_vetor(int vetor[6]){
    int i = 0;
    int num;
    for (i=0; i<6; i++){
        printf("Digite um numero: ");
        scanf("%i", &num);
        vetor[i] = num;
    }
}

void mostra_vetor(int vetor[6]){
    int i = 0;
    for (i=0; i<6; i++){
        printf("%i\n", vetor[i]);
    }
}

