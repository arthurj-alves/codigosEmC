#include <stdio.h>
#include <stdlib.h>

void main(){
    int F, W, D;
    printf("Contagem regressiva\n");
    printf("Usando for\n");
    for(F=10; F>0; F--){
        printf("%d\n", F);
    }
    printf("Usando while\n");
    W=10;
    while(W>0){
        printf("%d\n", W);
        W--;
    }
    printf("Usando do while\n");
    D=10;
    do{
        printf("%d\n", D);
        D--;
    }while (D>0);
}