/*Elaborar um programa que apresente todos os valores
numéricos inteiros ímpares situados na faixa de 0 a 20.*/

#include <stdio.h>

int main(){

    for(int i = 1; i <= 20; i += 2){

        printf("%d \n", i);
    }
}