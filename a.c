/*Elaborar um programa que apresente como resultado os
quadrados armazenados na memória dos números inteiros
existentes na faixa de valores de 15 a 200.*/

#include <stdio.h>

int main(){

    int resultado;

    for(int i = 15; i <= 200; i++ ){

        resultado = i*i;

        printf("%d \n", resultado);
    }

}