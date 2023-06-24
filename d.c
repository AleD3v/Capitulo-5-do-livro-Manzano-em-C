/*Elaborar um programa que apresente o somatório dos
valores pares existentes na faixa de 1 até 500.*/

#include <stdio.h>

int main(){

    int somatorio = 0;

    for(int i = 0; i <= 500; i += 2)
    {
        somatorio += i;
    }
    printf("O somatório dos valares pares é: %d \n", somatorio);

}