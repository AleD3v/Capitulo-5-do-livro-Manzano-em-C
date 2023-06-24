/*Construir um programa que apresente como resultado a
fatorial dos valores ímpares situados na faixa numérica de 1
até 10.*/

#include <stdio.h>

int main(){

    for(int i = 1; i <=10; i +=2){

        int num = i, resposta = 1;

        for(;num>=1; num--){

            resposta *= num;

        }

        printf("%d \n", resposta);

    }

}