#include <stdio.h>
#include <time.h>



int main(void){
    struct timeb inic, fim; // TIMEB
    int num, dif;
    printf("Digite um numero: ");
    ftime(&inic);
    scanf("%d", &num);
    ftime(&fim);
    dif = (int)(1000*(fim.time-inic.time)+(fim.millitm-inic.millitm));
    printf("Tempo gasto %d ms \n", dif);
    return 0;
}