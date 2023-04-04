#include <stdio.h>
#include <time.h>

int main (void){
    int pos, tam=50000;
    int vet[tam];

    for (pos=0; pos<tam; pos++){
        vet[pos] = rand();
    }

    // mostra primeiras posições

    for (pos=0; pos<20; pos++){
        printf("%d\n", vet[pos]);
    }

    return 0;
}