#include <stdio.h>
#include <stdlib.h>

int fib(int fib);

int main(void){
    int num;
    printf("Digite o número: ");
    scanf("%d", &num);
    printf("Resultado: %d \n", fib(num));
    return 0;
}

int fib(int param){
    if (param == 2 || param == 1){
        return 1;
    }
    return (fib(param-1)+fib(param-2));
}

