#include <stdio.h>
#include <stdlib.h>

struct tipo_no
{
    int num;
    struct tipo_no *prox;
};
    
int main()
{
    struct tipo_no *prim, *nova;
    prim = NULL;
    int x;
    
    while (x>=0)
    {
        if(!(nova = malloc(sizeof(struct tipo_no))))
        {
            printf("Faltou Memória! \n");
            return 1;
        }
        printf("Digite um valor positivo, se quiser encerrar digite um negativo: ");
        scanf("%d", &(nova->num));
        x = nova->num;
        if (x<0){break;}
        nova->prox = prim; // Inserir novo nó na lista ligada
        prim = nova;
    }
    
    nova = prim;
        while(nova != NULL)
        {
            printf("Valor: %d \n", nova->num);
            nova = nova->prox;
        }
     return 0;
}