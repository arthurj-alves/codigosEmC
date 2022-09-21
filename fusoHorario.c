#include <stdlib.h>
#include <stdio.h>

void main(){
/*  int minutos, horas, min;
    printf("escreva um valor em minutos->");
    scanf("%d", &minutos);
    horas=minutos/60;
    min= (minutos%60);
    printf("%d minutos são equivalentes a:\n%dhoras e %dminutos", minutos, horas, min); */
    
    int hs, ms, hc, mc, myfuso, destinofuso, tempovh, tempovm;
    char direcao;
    printf("\nDigite o horário de saida->"); 
    scanf("%d:%d", &hs, &ms);
    printf("\nDigite o seu fuso->");
    scanf("%d", &myfuso);
    printf("\nDigite o fuso do destino->");
    scanf("%d", &destinofuso);
    printf("\nDigite o tempo de viagem->");
    scanf("%d:%d", &tempovh, &tempovm);

/*  printf("\nVocê vai para qual direção, L ou O?->");
    scanf("%c", &direcao); */
    int fusoc;
    if (myfuso<0 && destinofuso <0){
        fusoc = myfuso + abs(destinofuso);
    }else if (myfuso > 0 && destinofuso > 0){
        fusoc = myfuso - destinofuso;
    }else{
        fusoc = myfuso - destinofuso;
    }
    printf("\nVocê percorrerá %d fusos,", abs(fusoc));



    if (fusoc < 0){
        fusoc=abs(fusoc);
        direcao = 'L';
    }else if(fusoc > 0){
        fusoc=abs(fusoc) * -1;
        direcao = 'O';
    }
    printf(" na direção %c.", direcao);
    hc = hs + fusoc + tempovh;
    mc = ms + tempovm;
    if(mc>=60){
        mc = mc - 60;
        hc = hc + 1;
    }
    if(hc>=24){
        hc= hc - 24;
        
        printf("\nVocê chegará no destino às %d:%d do dia seguinte.", hc, mc);
    }else{
        printf("\nVocê chegará no destino às %d:%d.", hc, mc);
    }
}