#include <stdio.h>
#include <stdlib.h>

struct tipo_no{
    int num;
    struct tipo_no *prox;
};

int isEmpty (struct tipo_no *parm); //  se retornar 0, a pilha esta vazia
int top(struct tipo_no *parm); 
void push (struct tipo_no **parm, int valor);
int pop(struct tipo_no **parm);

int main (void){
    int pos=1;

    struct tipo_no *pilha=NULL;
    for(pos; pos<6; pos++){
        push(&pilha, pos);

    }
    printf("\nMostrando a pilha...\n");
    while(isEmpty(pilha)!=0){
        pos = pop(&pilha);
        printf("%d\n", pos);
    }
    return 0;
}

int isEmpty(struct tipo_no *parm){
    if(parm == NULL){
        printf("ERROR! THIS STACK IS FULL!");
        exit(1);
    }
    else {return 1;}
}

int top(struct tipo_no *parm){
    if(parm == NULL){
        printf("ERROR! STACK IS EMPTY");
        exit(1);
    }
    return parm->num;
}

void push(struct tipo_no **parm, int valor){
    struct tipo_no *novo;
    if(!(novo=malloc(sizeof(struct tipo_no)))){
        printf("No memory left");
        exit(2);
    }
    novo -> num = valor;
    novo -> prox = *parm;
    *parm = novo;

}

int pop(struct tipo_no **parm){
    struct tipo_no *remover;
    int valor;
    if(*parm == NULL){
        printf("Stack is empty!");
        exit(3);
    }
    

    remover = *parm; // remover recebe o struct que é o topo da pilha
    valor = remover -> num; // valor recebe o valor do struct que vai ser removido
    *parm = remover -> prox; // *parm que é o topo agora recebe o endereço que estava no topo
    free(remover); // remove o topo inical 
    return valor;

}