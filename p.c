/*Elaborar um programa que apresente os resultados da
soma e da média aritmética dos valores pares situados na
faixa numérica de 50 até 70.*/

#include <stdio.h>

int main(){

    int media, somatorio = 0, qtd = 0;

    for(int i = 50; i <= 70; i+= 2){

        somatorio += i;

        qtd++;

    }

    media = somatorio/qtd;
    printf("O somatório dos valores pares é %d e a média deles é %d. \n", somatorio, media);
    
}