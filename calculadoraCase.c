#include <stdio.h>

void main(){
    int a, b, c;
    printf("Digite o primeiro valor:");
    scanf("%d",&a);
    printf("Digite o segundo valor:");
    scanf("%d",&b);
    
    printf("1.Somar\n");
    printf("2.Subtrair\n");
    printf("3.Multiplicar\n");
    printf("4.Dividir\n");
    printf("Select:");
    scanf("%d", &c);
    
    switch (c){
        case 1:
        printf("%d+%d=%d", a, b, a+b);
        break;
        case 2:
        printf("%d-%d=%d", a, b, a-b);
        break;
        case 3:
        printf("%d*%d=%d", a, b, a*b);
        break;
        case 4:
        printf("%d÷%d=%d", a, b, a/b);
        break;
        default:
        printf("Undefined");
        break;
    }
}