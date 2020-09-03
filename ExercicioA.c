#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv)
{
     int N, horas, horas_seg, minutos, segundos;
       horas_seg=3600;//horas em segundos
       
    printf("Por Favor Escreva um Numero Inteiro: ");
    
    scanf("%d", &N);
       horas = (N/horas_seg); //resultado da hora
       minutos = (N -(horas_seg*horas))/60;
       segundos = (N -(horas_seg*horas)-(minutos*60));
       
       printf("Resultado : ");
       
       
    printf("%dh : %dm : %ds \n",horas,minutos,segundos);
    
       return 0;
}
