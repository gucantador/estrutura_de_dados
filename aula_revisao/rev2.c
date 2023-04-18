#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};


int main(){
    struct node *first, *new;
    first = NULL;
    int x;
    while (x!=-1)
    {
    if(!(new = malloc(sizeof(struct node))))
    {
        printf("Faltou Memória! \n");
        return 1;
    }
    printf("Type a number or -1 to end the data gathering:  ");
    scanf("%d", &x);
    if (x==-1){break;}  
    new->data=x;
    new->next = first; // Inserir novo nó na lista ligada
    first = new;
    }

    new = first;
    while(new != NULL)
    {
        printf("Valor: %d \n", new->data);
        new = new->next;
    }
    return 0;


}


