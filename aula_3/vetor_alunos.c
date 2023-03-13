#include <stdio.h>
#include <stdlib.h>



struct aluno
{
    int ra;
    float nota;
};


int main(){
    struct aluno vetor_principal[6];
    carrega_vetor(vetor_principal);
    mostra_vetor(vetor_principal);
    return 0;
}

void carrega_vetor(struct aluno vetor[6]){
    int i = 0;
    int num;
    float nota;
    for (i=0; i<6; i++){
        printf("Digite um numero para o ra: ");
        scanf("%i", &num);
        vetor[i].ra = num;

        printf("Digite um numero para a nota: ");
        scanf("%f", &nota);
        vetor[i].nota = nota;

    }


}

void mostra_vetor(struct aluno vetor[6]){
    int i = 0;
    for (i=0; i<6; i++){
        printf("----------------------------------------\n");
        printf("ALUNO %i\n", i+1);
        printf("ra: %i\n", vetor[i].ra);
        printf("nota: %.2f\n", vetor[i].nota);
    }
}
