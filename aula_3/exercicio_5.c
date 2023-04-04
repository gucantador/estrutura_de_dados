#include <stdio.h>
#include <sys/timeb.h>
#include <stdlib.h>

int main(void){
    struct timeb inic, fim;
    int num, dif;
    int pos, tam=50000;
    int vet[tam];
    ftime(&inic);

    for (pos=0; pos<tam; pos++){
        vet[pos] = rand();
    }
    
    ftime(&fim);
    dif = (int)(1000*(fim.time-inic.time)+(fim.millitm-inic.millitm));
    printf("Tempo gasto %d ms \n", dif);
    return 0;

}
