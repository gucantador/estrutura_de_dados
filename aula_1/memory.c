#include <stdio.h>
#include <stdlib.h>

struct tipo_simples{
    float num[10000];
};

int main(void){
    int i=0;
    struct tipo_simples *repo;
    while( 1 == 1){
         printf("%d\n", i++);
        if(!(repo = malloc(sizeof(struct tipo_simples)))){
            printf("Faltou memoria");
            return -1;            
        }
       
    }
    
    return 0;
}